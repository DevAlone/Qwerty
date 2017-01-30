#include "pencil.h"
#include "penciloptions.h"

#include <QPainter>

namespace tools {

Pencil::Pencil()
{

}

void Pencil::pressAction(QPixmap &pixmap, const ToolOptions &options, const QPoint &point) const
{
//    const PencilOptions &pOptions = static_cast<const PencilOptions &>(options);//убрать эту копипасту
//    if(pOptions.size < 1)
//        return;

//    QPainter painter(&pixmap);

//    painter.setPen(pOptions.color);

//    if(pOptions.size == 1) {
//        painter.drawPoint(point);
//    } else {
//        painter.drawEllipse(point, pOptions.size, pOptions.size);
//    }
}

void Pencil::moveAction(QPixmap &pixmap, const ToolOptions &options, const QVector<QPoint> &points) const
{
    const PencilOptions &pOptions = static_cast<const PencilOptions &>(options);//?

    if(pOptions.size < 1)
        return;

    QPainter painter(&pixmap);

    QPen pen;
    pen.setColor(Qt::black);
    pen.setWidth(pOptions.size);

    painter.setPen(pen);



    //painter.setRenderHint(QPainter::Antialiasing, true);

    QPainterPath path(points.first());
    for(QVector<QPoint>::const_iterator it = points.constBegin() + 1; it != points.constEnd(); ++it) {
        path.lineTo(*it);
    }

    painter.drawPath(path);
}

void Pencil::releaseAction(QPixmap &pixmap, const ToolOptions &options, const QVector<QPoint> &points) const
{
    const PencilOptions &pOptions = static_cast<const PencilOptions &>(options);//?

    if(pOptions.size < 1 || points.length() < 1)
        return;

    QPainter painter(&pixmap);

    painter.setRenderHint(QPainter::Antialiasing, true);


    QPen pen;
    pen.setColor(pOptions.color);
    pen.setWidth(pOptions.size);

    painter.setPen(pen);
    //painter.setBrush(QBrush(pOptions.color));

    //painter.drawLines(points);

//    const QPoint *prevPoint = 0;
//    for(QVector<QPoint>::const_iterator it = points.constBegin(); it != points.constEnd(); ++it) {
//        if(!prevPoint) {
//            prevPoint = &*it;
//            continue;
//        }
//        painter.drawLine(*prevPoint, *it);
//        prevPoint = &*it;
//    }


    if(points.length() > 1) {
        QPainterPath path(points.first());
        for(QVector<QPoint>::const_iterator it = points.constBegin() + 1; it != points.constEnd(); ++it) {
            path.lineTo(*it);
        }

        painter.drawPath(path);
    } else {
        painter.drawEllipse(points.first(), pOptions.size, pOptions.size);
    }
}

}
