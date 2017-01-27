#include "painter.h"

Painter::Painter(QObject *parent) : QObject(parent)
{

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
}

void Painter::mouseMoved(QMouseEvent *mouseEvent)
{
    qDebug() << "mouse moved and " << "button " << mouseEvent->buttons() << " pressed";
    qDebug() << "\t" << mouseEvent->pos();
}
