#ifndef TOOL_H
#define TOOL_H

#include "tooloptions.h"

#include <QPixmap>
#include <QPoint>


namespace tools {

class Tool
{
public:
    Tool();
    // при клике
    virtual void pressAction(QPixmap &pixmap, const ToolOptions &options, const QPoint &point) const = 0;
    // при движении мышки
    virtual void moveAction(QPixmap &pixmap, const ToolOptions &options, const QVector<QPoint> & points) const = 0;
    virtual void releaseAction(QPixmap &pixmap, const ToolOptions &options, const QVector<QPoint> &points) const = 0;
};

}

#endif // TOOL_H
