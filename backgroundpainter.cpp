#include "backgroundpainter.h"


BackgroundPainter::BackgroundPainter(Painter *painter)
    : QThread(), painter(painter)
{

}

void BackgroundPainter::run()
{
    painter->getImage()->redraw();
    qDebug() << "background painter finished";
}

void BackgroundPainter::draw(QPixmap &pixmap, const tools::Tool &tool, const tools::ToolOptions &options,
                             const QVector<QPoint> &points)
{
    // этот метод должен класть действия в очередь
//    QPainter painter(pixmap);

//    painter.setBrush(Qt::yellow);
//    painter.drawLine(0, 0, points->pos().x(), points->pos().y());
    tool.releaseAction(pixmap, options, points);

    start();
}

