#ifndef IMAGE_H
#define IMAGE_H

#include <memory>

#include <QObject>

#include "layer.h"


class Image : public QObject
{
    Q_OBJECT
public:
    explicit Image(QObject *parent = 0);
    Image(int width, int height, const QColor &backgroundColor);

    QPixmap getImage() const;
    bool addLayer(const Layer &layer);
    bool addLayer(const QColor &backgroundColor);

    QColor getBackgroundColor() const;
    void setBackgroundColor(const QColor &value);

signals:

public slots:
    void redraw();
protected:
    int width, height;
    QColor backgroundColor;
    QList<Layer> layers;
    //QList<std::unique_ptr<Layer>> layers;
    int activeLayer;
    QPixmap image;

};

#endif // IMAGE_H
