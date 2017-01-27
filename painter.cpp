#include "painter.h"

#include <QPainter>

Painter::Painter(QObject *parent) : QObject(parent)
{
    backgroundPainter = std::make_unique<BackgroundPainter>(this);
    connect(backgroundPainter.get(), SIGNAL(finished()), this, SIGNAL(imageUpdated()));
}

std::shared_ptr<Image> Painter::getImage() const
{
    return image;
}

void Painter::setImage(const std::shared_ptr<Image> &value)
{
    image = value;

    emit imageChanged(image);
}

void Painter::mouseButtonPressed(QMouseEvent *mouseEvent)
{
    qDebug() << "button " << mouseEvent->button() << " pressed";

    Layer *activeLayer = image->getActiveLayer();
    if(!activeLayer)
        return;

    QPixmap *pixmap = &activeLayer->pixmap;

    QPainter painter(pixmap);
    painter.setBrush(Qt::red);
    static int i = 10;
    painter.drawLine(0, 0, 100, i);
    i+=10;

    image->redraw();

    emit imageUpdated();
}

void Painter::mouseMoved(QMouseEvent *mouseEvent)
{
    qDebug() << "mouse moved and " << "button " << mouseEvent->buttons() << " pressed";
    qDebug() << "\t" << mouseEvent->pos();

    Layer *activeLayer = image->getActiveLayer();
    if(!activeLayer)
        return;

    backgroundPainter->draw(&activeLayer->pixmap, 0, 0, mouseEvent);
    backgroundPainter->start();

    //image->redraw();

    //emit imageUpdated();
}
