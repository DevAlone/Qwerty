#include "drawingarea.h"

#include <QEvent>
#include <QHBoxLayout>
#include <QMouseEvent>
#include <QPainter>
#include <painter.h>

DrawingArea::DrawingArea(QWidget *parent) : QScrollArea(parent)
{
    layout = new QHBoxLayout(this);

    imageLabel = new QLabel(this);
    imageLabel->installEventFilter(this);
    imageLabel->setText("image label");
    layout->addWidget(imageLabel);

}

bool DrawingArea::eventFilter(QObject *object, QEvent *event)
{
    if(object == imageLabel) {
        if(event->type() == QEvent::MouseMove) {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent * >(event);
            if(mouseEvent->buttons() & Qt::LeftButton) {
                // Left button
                emit mouseMoved(mouseEvent);
                return true;
            } else if (mouseEvent->buttons() & Qt::RightButton) {
                // Right button
                emit mouseMoved(mouseEvent);
                return true;
            } else
                return false;
        } else if (event->type() == QEvent::MouseButtonPress) {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
            emit mouseButtonClicked(mouseEvent);
            return true;
        } else if (event->type() == QEvent::Paint) {
            QPaintEvent *paintEvent = static_cast<QPaintEvent *>(event);
            //QLabel *label = static_cast<QLabel *>(object);

            if(imageLabel->pixmap() && !imageLabel->pixmap()->isNull()) {
                QPainter painter(imageLabel);

                painter.drawPixmap(0, 0, image->getImage());
                return true;
            }
        }
    }
    return false;
}

std::shared_ptr<Image> DrawingArea::getImage() const
{
    return image;
}

void DrawingArea::setImage(const std::shared_ptr<Image> &value)
{
    image = value;
    imageLabel->setPixmap(image->getImage());//?
}

void DrawingArea::imageChangedSlot(std::weak_ptr<Image> image)
{
    setImage(image.lock());
}

void DrawingArea::updateSlot()
{
    // update image

    imageLabel->update();
}

