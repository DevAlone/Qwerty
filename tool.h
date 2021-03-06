#ifndef TOOL_H
#define TOOL_H
#include <memory>

#include "tooloptions.h"

#include <QPixmap>
#include <QPoint>


namespace tools {

class Tool
{
public:
    Tool();
    // при клике
    virtual void pressAction(QPixmap &pixmap, const QPoint &point) const = 0;
    // при движении мышки
    virtual void moveAction(QPixmap &pixmap, const QVector<QPoint> & points) const = 0;
    virtual void releaseAction(QPixmap &pixmap, const QVector<QPoint> &points) const = 0;

    std::shared_ptr<ToolOptions> getOptions() const;
    void setOptions(const std::shared_ptr<ToolOptions> &value);

protected:
    std::shared_ptr<ToolOptions> options;
};

}

#endif // TOOL_H
