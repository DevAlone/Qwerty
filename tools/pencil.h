#ifndef PENCIL_H
#define PENCIL_H

#include "tool.h"


namespace tools {

class Pencil : public Tool
{
public:
    Pencil();

    virtual void pressAction(QPixmap &pixmap, const QPoint &point) const;
    virtual void moveAction(QPixmap &pixmap, const QVector<QPoint> &points) const;
    virtual void releaseAction(QPixmap &pixmap, const QVector<QPoint> &points) const;
};

}

#endif // PENCIL_H
