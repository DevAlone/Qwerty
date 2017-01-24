#include "image.h"

#include <QPainter>


Image::Image(QObject *parent)
    : QObject(parent)
{

}

Image::Image(int width, int height, const QColor &backgroundColor)
{
    this->width = width;
    this->height = height;

    image = QPixmap(width, height);
    this->backgroundColor = backgroundColor;
    addLayer(Qt::transparent);
    redraw();
}

QPixmap Image::getImage() const
{
    return image;
}

bool Image::addLayer(const Layer &layer)
{
    layers.push_back(layer);
}

bool Image::addLayer(const QColor &backgroundColor = Qt::transparent)
{
    Layer layer(width, height, backgroundColor);
    layer.getPixmap().fill(backgroundColor);
    addLayer(layer);
}

void Image::redraw()
{
    QPainter painter(&image);
    painter.fillRect(0, 0, width, height, backgroundColor);
    for(const Layer& layer : layers) {
        QImage sourceImage(layer.getPixmap().toImage());
        int twidth = layer.getPixmap().width();
        int theight = layer.getPixmap().height();
        QImage tempImage(twidth, theight, QImage::Format_ARGB32);

        for(int y = 0; y < theight; y++) {
            for(int x = 0; x < twidth; x++) {
                QColor color(sourceImage.pixel(x, y));
                color.setAlpha(layer.getOpacity());
                tempImage.setPixel(x, y, color.rgba());
            }
        }

        painter.drawPixmap(0, 0, QPixmap::fromImage(tempImage));
        //painter.drawPixmap(0, 0, QPixmap::fromImage(tempImage));
    }
}

QColor Image::getBackgroundColor() const
{
    return backgroundColor;
}

void Image::setBackgroundColor(const QColor &value)
{
    backgroundColor = value;
}

