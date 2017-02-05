#include "painter.h"

#include <QPainter>

#include <tools/pencil/pencil.h>
#include <tools/pencil/penciloptions.h>

Painter::Painter(QObject *parent) : QObject(parent)
{
    backgroundPainter = std::make_unique<BackgroundPainter>(this);
    connect(backgroundPainter.get(), SIGNAL(finished()), this, SIGNAL(imageUpdated()));
    toolbox = std::make_unique<ToolBox>(this);

    //connect(toolbox.get(), SIGNAL(tool1Changed(std::weak_ptr<tools::Tool>)), this, SLOT

    QVector<std::shared_ptr<tools::Tool>> tools;
    for(int i = 0; i < 5; i++) {
        std::shared_ptr<tools::Tool> tool;
        tool = std::make_shared<tools::Pencil>();

        std::shared_ptr<tools::PencilOptions> option = std::make_shared<tools::PencilOptions>((i+1)*2, Qt::red);
        tool->setOptions(option);

        tools.push_back(tool);
    }
    toolbox->addTools(tools);
    qDebug() << "\n\t6\n";

}

std::shared_ptr<Image> Painter::getImage() const
{
    return image;
}

void Painter::setImage(const std::shared_ptr<Image> &value)
{
    image = value;

    emit imageChanged(image);
}


void Painter::mouseButtonPressed(QMouseEvent *mouseEvent)
{
    points.push_back(mouseEvent->pos());
    qDebug() << "button " << mouseEvent->button() << " pressed";

}

void Painter::mouseMoved(QMouseEvent *mouseEvent)
{
    points.push_back(mouseEvent->pos());
    qDebug() << "mouse moved and " << "button " << mouseEvent->buttons() << " pressed";
    qDebug() << "\t" << mouseEvent->pos();

    Layer *activeLayer = image->getActiveLayer();
    if(!activeLayer) {
        qDebug() << "ERRRRRRRRRoooooooor";
        return;
    }
    std::shared_ptr<tools::Tool> activeTool;
    if(mouseEvent->buttons() & Qt::RightButton)
        activeTool = toolbox->getTool2().lock();
    else
        activeTool = toolbox->getTool1().lock();


    if(activeTool) {
        activeTool->moveAction(image->getImage(), points.toVector());

        emit imageUpdated();
    }

    //backgroundPainter->draw(&activeLayer->pixmap, 0, 0, mouseEvent);


    //image->redraw();

    //emit imageUpdated();
}

void Painter::mouseButtonReleased(QMouseEvent *mouseEvent)
{
    qDebug() << "mouse released";

    Layer *activeLayer = image->getActiveLayer();
    if(!activeLayer) {
        qDebug() << "ERRRRRRRRRoooooooor";
        return;
    }

    std::shared_ptr<tools::Tool> activeTool;
    if(mouseEvent->button() == Qt::RightButton)
        activeTool = toolbox->getTool2().lock();
    else
        activeTool = toolbox->getTool1().lock();

    if(activeTool)
        backgroundPainter->draw(activeLayer->pixmap, *activeTool.get(), points.toVector());

    points.clear();
}

std::shared_ptr<ToolBox> Painter::getToolbox() const
{
    return toolbox;
}

