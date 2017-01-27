#ifndef PAINTER_H
#define PAINTER_H

#include <QMouseEvent>
#include <QObject>

#include <QDebug>

#include <image/image.h>



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

private:
    std::shared_ptr<Image> image;
};

#endif // PAINTER_H
