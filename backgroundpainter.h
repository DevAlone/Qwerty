#ifndef BACKGROUNDPAINTER_H
#define BACKGROUNDPAINTER_H

#include "painter.h"
#include "image/layer.h"
#include <QMouseEvent>

#include <QThread>


class Painter;

class BackgroundPainter : public QThread
{
public:
    BackgroundPainter(Painter *painter);
    void run();
    void draw(QPixmap *pixmap, void *tool, void* options, QMouseEvent *mouseEvent);

private:
    Painter *painter;
    //QQueue
};

#endif // BACKGROUNDPAINTER_H
