#ifndef BACKGROUNDPAINTER_H
#define BACKGROUNDPAINTER_H

#include "painter.h"
#include "image/layer.h"
#include <QMouseEvent>

#include <QThread>

#include <tools/tool.h>
#include <tools/tooloptions.h>
#include <QPainter>


class Painter;

class BackgroundPainter : public QThread
{
public:
    BackgroundPainter(Painter *painter);
    void run();
    void draw(QPixmap &pixmap, const tools::Tool &tool, const tools::ToolOptions &options,
              const QVector<QPoint> &points);

private:
    Painter *painter;
    //QQueue
};

#endif // BACKGROUNDPAINTER_H
