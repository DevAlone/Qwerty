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

    //    for(int i=0;i<100;i++) {
    //        QPushButton *button = new QPushButton;
    //        buttons.push_back(button);
    //        toolButtonsLayout->addWidget(button);
    //    }

    //    for(QObject *button : buttons) {
    //        delete button;
    //    }

    //    for(int i=0;i<10;i++) {
    //        QPushButton *button = new QPushButton;
    //        buttons.push_back(button);
    //        toolButtonsLayout->addWidget(button);
    //    }
}

std::shared_ptr<ToolBox> ToolBoxWidget::getToolBox() const
{
    return toolbox;
}

void ToolBoxWidget::setToolBox(const std::shared_ptr<ToolBox> &value)
{
    toolbox = value;
    connect(toolbox.get(), SIGNAL(toolsChanged(QVector<std::shared_ptr<tools::Tool> >)),
            this, SLOT(toolsChanged(QVector<std::shared_ptr<tools::Tool> >)));
    connect(toolbox.get(), SIGNAL(tool1Changed(std::weak_ptr<tools::Tool>)),
            this, SLOT(tool1Changed(std::weak_ptr<tools::Tool>)));
    connect(toolbox.get(), SIGNAL(tool2Changed(std::weak_ptr<tools::Tool>)),
            this, SLOT(tool2Changed(std::weak_ptr<tools::Tool>)));

    toolsChanged(value->getTools());
}

void ToolBoxWidget::toolsChanged(QVector<std::shared_ptr<tools::Tool> > changedTools)
{// update toolbuttons and other widgets
    for(QObject *button : buttons) {
        delete button;
    }
    QVector<std::shared_ptr<tools::Tool>> tools = toolbox->getTools();

    for(std::shared_ptr<tools::Tool> tool : tools) {
        std::weak_ptr<tools::Tool> wtool = tool;
        ToolButton *button = new ToolButton(this, wtool);

        button->setStyleSheet(button->styleSheet() + "ToolButton { background: none; }");
        button->setStyleSheet(button->styleSheet() + "ToolButton { border-style: solid;"
                              "border-width: 1px;"
                              "border-color: black; }");

        buttons.push_back(button);
        connect(button, SIGNAL(clicked()), this, SLOT(toolButton1Clicked()));
        connect(button, SIGNAL(rightClicked()), this, SLOT(toolButton2Clicked()));
        toolButtonsLayout->addWidget(button);
    }
}

void ToolBoxWidget::tool1Changed(std::weak_ptr<tools::Tool> newTool)
{// выделяем нужную кнопочку и меняем окно с опциями

    for(auto button : buttons) {
        auto pbuttontool = button->getTool().lock();
        if(!pbuttontool)
            continue;
        auto ptool = newTool.lock();

        if(ptool) {
            if(ptool.get() == pbuttontool.get()) {
                button->setStyleSheet(button->styleSheet() + "ToolButton { background: red; }");
                continue;
            }
        }
        button->setStyleSheet(button->styleSheet() + "ToolButton { background: none; }");
    }
}

void ToolBoxWidget::tool2Changed(std::weak_ptr<tools::Tool> newTool)
{// выделяем нужную кнопочку и меняем окно с опциями
    for(auto button : buttons) {
        auto pbuttontool = button->getTool().lock();
        if(!pbuttontool)
            continue;
        auto ptool = newTool.lock();

        if(ptool) {
            if(ptool.get() == pbuttontool.get()) {
                button->setStyleSheet(button->styleSheet() + "ToolButton { border-style: solid; "
                                      "border-width: 1px; "
                                      "border-color: red; }");
                continue;
            }
        }
        button->setStyleSheet(button->styleSheet() + "ToolButton { border-style: solid;"
                              "border-width: 1px;"
                              "border-color: black; }");
    }
}

void ToolBoxWidget::toolButton1Clicked()
{
    toolButtonClicked(1);
}
void ToolBoxWidget::toolButton2Clicked()
{
    toolButtonClicked(2);
}

void ToolBoxWidget::toolButtonClicked(int number)
{
    ToolButton *button = qobject_cast<ToolButton *>(sender());
    if(!button)
        return;
    std::shared_ptr<tools::Tool> tool = button->getTool().lock();
    if(!tool)
        return;

    switch(number) {
    case 1:
        getToolBox()->setTool1(tool);
        break;
    case 2:
        getToolBox()->setTool2(tool);
        break;
    }



    qDebug() << "button clicked" << tool.get();

}

