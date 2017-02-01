#include "toolboxwidget.h"

#include <QPushButton>

ToolBoxWidget::ToolBoxWidget(QWidget *parent) : QWidget(parent)
{
    mainLayout = new QHBoxLayout;
    toolButtonsLayout = new QHBoxLayout;

    toolBoxContentWidget = new QWidget;

    this->setLayout(mainLayout);
    mainLayout->addLayout(toolButtonsLayout);
    mainLayout->addWidget(toolBoxContentWidget);

    for(int i=0;i<100;i++) {
        QPushButton *button = new QPushButton;
        buttons.push_back(button);
        toolButtonsLayout->addWidget(button);
    }

    for(QObject *button : buttons) {
        delete button;
    }

    for(int i=0;i<10;i++) {
        QPushButton *button = new QPushButton;
        buttons.push_back(button);
        toolButtonsLayout->addWidget(button);
    }
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
    for(QObject *button : buttons) {
        delete button;
    }

    for(std::shared_ptr<tools::Tool> tool : toolbox->getTools()) {

        std::weak_ptr<tools::Tool> wtool = tool;
        ToolButton *button = new ToolButton(this, wtool);
        buttons.push_back(button);
    }
}

void ToolBoxWidget::tool1Changed(std::weak_ptr<tools::Tool> newTool)
{// выделяем нужную кнопочку и меняем окно с опциями

}

void ToolBoxWidget::tool2Changed(std::weak_ptr<tools::Tool> newTool)
{// выделяем нужную кнопочку и меняем окно с опциями

}

