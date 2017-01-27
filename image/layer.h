#ifndef LAYER_H
#define LAYER_H

#include <QPixmap>

class Layer
{
public:
    Layer(int width, int height, const QColor &color = Qt::transparent);
    Layer(const QPixmap &pixmap);

    unsigned char getOpacity() const;
    void setOpacity(unsigned char value);

    QPixmap getPixmap() const;
    void setPixmap(const QPixmap &value);

protected:
    QPixmap pixmap;
    unsigned char opacity = 255;
};

#endif // LAYER_H
