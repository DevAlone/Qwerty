#include "toolboxwidget.h"

ToolBoxWidget::ToolBoxWidget(QWidget *parent) : QWidget(parent)
{

}

std::shared_ptr<ToolBox> ToolBoxWidget::getToolbox() const
{
    return toolbox;
}

void ToolBoxWidget::setToolbox(const std::shared_ptr<ToolBox> &value)
{
    toolbox = value;
    connect(toolbox.get(), SIGNAL(toolsChanged(QVector<std::shared_ptr<tools::Tool> >)),
            this, SLOT(toolsChanged(QVector<std::shared_ptr<tools::Tool> >)));
    connect(toolbox.get(), SIGNAL(tool1Changed(std::weak_ptr<tools::Tool>)),
            this, SLOT(tool1Changed(std::weak_ptr<tools::Tool>)));
    connect(toolbox.get(), SIGNAL(tool2Changed(std::weak_ptr<tools::Tool>)),
            this, SLOT(tool2Changed(std::weak_ptr<tools::Tool>)));

}

void ToolBoxWidget::toolsChanged(QVector<std::shared_ptr<tools::Tool> >)
{// update toolbuttons and other widgets

}

void ToolBoxWidget::tool1Changed(std::weak_ptr<tools::Tool> newTool)
{// выделяем нужную кнопочку и меняем окно с опциями

}

void ToolBoxWidget::tool2Changed(std::weak_ptr<tools::Tool> newTool)
{// выделяем нужную кнопочку и меняем окно с опциями

}

