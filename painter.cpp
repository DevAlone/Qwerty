#include "painter.h"

#include <QPainter>

#include <tools/pencil.h>
#include <tools/penciloptions.h>

Painter::Painter(QObject *parent) : QObject(parent)
{
    backgroundPainter = std::make_unique<BackgroundPainter>(this);
    connect(backgroundPainter.get(), SIGNAL(finished()), this, SIGNAL(imageUpdated()));

    qDebug() << "\n\t6\n";

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
    points.push_back(mouseEvent->pos());
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
    points.push_back(mouseEvent->pos());
    qDebug() << "mouse moved and " << "button " << mouseEvent->buttons() << " pressed";
    qDebug() << "\t" << mouseEvent->pos();

    Layer *activeLayer = image->getActiveLayer();
    if(!activeLayer) {
        qDebug() << "ERRRRRRRRRoooooooor";
        return;
    }
    tools::Pencil pencil;
    tools::PencilOptions options;
    options.color = Qt::red;
    options.size = 2;

    //backgroundPainter->draw(activeLayer->pixmap, pencil, options, points.toVector());
    pencil.moveAction(image->getImage(), options, points.toVector());

    emit imageUpdated();

    //backgroundPainter->draw(&activeLayer->pixmap, 0, 0, mouseEvent);


    //image->redraw();

    //emit imageUpdated();
}

void Painter::mouseButtonReleased(QMouseEvent *mouseEvent)
{
    qDebug() << "mouse released";

    Layer *activeLayer = image->getActiveLayer();
    if(!activeLayer) {
        qDebug() << "ERRRRRRRRRoooooooor";
        return;
    }
    tools::Pencil pencil;
    tools::PencilOptions options;
    options.color = Qt::red;
    options.size = 2;

    backgroundPainter->draw(activeLayer->pixmap, pencil, options, points.toVector());
    points.clear();


}
