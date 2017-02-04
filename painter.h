#ifndef PAINTER_H
#define PAINTER_H

#include "backgroundpainter.h"
#include "toolbox.h"

#include <QMouseEvent>
#include <QObject>

#include <QDebug>
#include <QThread>

#include <image/image.h>

#include <tools/pencil.h>
#include <tools/penciloptions.h>
#include <tools/tool.h>
#include <tools/tooloptions.h>
#include <tools/tools.h>


class BackgroundPainter;

class Painter : public QObject
{
    Q_OBJECT
public:
    explicit Painter(QObject *parent = 0);

    std::shared_ptr<Image> getImage() const;
    void setImage(const std::shared_ptr<Image> &value);



    std::shared_ptr<ToolBox> getToolbox() const;

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
    std::shared_ptr<ToolBox> toolbox;
};

#endif // PAINTER_H
