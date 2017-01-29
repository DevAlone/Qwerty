#ifndef PAINTER_H
#define PAINTER_H

#include "backgroundpainter.h"

#include <QMouseEvent>
#include <QObject>

#include <QDebug>
#include <QThread>

#include <image/image.h>


class BackgroundPainter;

class Painter : public QObject
{
    Q_OBJECT
public:
    explicit Painter(QObject *parent = 0);

    std::shared_ptr<Image> getImage() const;
    void setImage(const std::shared_ptr<Image> &value);


signals:
    void imageChanged(std::weak_ptr<Image> image);
    void imageUpdated();

public slots:
    void mouseButtonPressed(QMouseEvent *mouseEvent);
    void mouseMoved(QMouseEvent *mouseEvent);
    void mouseButtonReleased(QMouseEvent *mouseEvent);

private:
    std::shared_ptr<Image> image;

    std::unique_ptr<BackgroundPainter> backgroundPainter;

    QList<QPoint> points;
};

#endif // PAINTER_H
