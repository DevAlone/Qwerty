#include "image.h"

#include <QPainter>
#include <QTime>


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
    addLayer(Qt::green);
    //addLayer(Qt::transparent);
    activeLayer = layers.length() - 1;
    redraw();
}

Image::Image(const QPixmap &pixmap)
{
    this->width = pixmap.width();
    this->height = pixmap.height();

    image = QPixmap(width, height);
    this->backgroundColor = Qt::transparent;
    addLayer(pixmap);
    activeLayer = layers.length() - 1;

    redraw();
}

QPixmap & Image::getImage()
{
    return image;
}

bool Image::addLayer(const Layer &layer)
{
    layers.push_back(layer);
    return true;
}

bool Image::addLayer(const QColor &backgroundColor = Qt::transparent)
{
    Layer layer(width, height, backgroundColor);
    layer.pixmap.fill(backgroundColor);
    addLayer(layer);
    return true;
}

bool Image::addLayer(const QPixmap &pixmap)
{
    Layer layer(pixmap);
    addLayer(layer);
    return true;
}

Layer *Image::getActiveLayer()
{
    if(layers.length() < 1)
        return 0;

    return &layers[activeLayer];
}


void Image::redraw()
{
// нужно оптимизировать это говно
    QTime t;
    t.start();

    QPainter painter(&image);
    painter.fillRect(0, 0, width, height, backgroundColor);
    for(const Layer& layer : layers) {
        QImage sourceImage(layer.pixmap.toImage());
        int twidth = layer.pixmap.width();
        int theight = layer.pixmap.height();
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
    //painter.setPen(Qt::green);
    //painter.drawLine(0, 0, 100, 100);

    qDebug("Time elapsed: %d ms", t.elapsed());
}



void Image::setActiveLayer(int value)
{
    activeLayer = value;
}

QColor Image::getBackgroundColor() const
{
    return backgroundColor;
}

void Image::setBackgroundColor(const QColor &value)
{
    backgroundColor = value;
}
