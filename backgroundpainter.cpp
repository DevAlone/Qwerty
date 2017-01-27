#include "backgroundpainter.h"

#include <QPainter>

BackgroundPainter::BackgroundPainter(Painter *painter)
    : QThread(), painter(painter)
{

}

void BackgroundPainter::run()
{
    painter->getImage()->redraw();
}

void BackgroundPainter::draw(QPixmap *pixmap, void *tool, void *options, QMouseEvent *mouseEvent)
{
    // этот метод должен класть действия в очередь
    QPainter painter(pixmap);

    painter.setBrush(Qt::yellow);
    painter.drawLine(0, 0, mouseEvent->pos().x(), mouseEvent->pos().y());
}

