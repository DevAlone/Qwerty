#include "layer.h"

Layer::Layer(int width, int height, const QColor &color)
{
    pixmap = QPixmap(width, height);
    pixmap.fill(color);
}

Layer::Layer(const QPixmap &pixmap)
{
    this->pixmap = pixmap;
}

unsigned char Layer::getOpacity() const
{
    return opacity;
}

void Layer::setOpacity(unsigned char value)
{
    opacity = value;
}

QPixmap Layer::getPixmap() const
{
    return pixmap;
}

void Layer::setPixmap(const QPixmap &value)
{
    pixmap = value;
}

