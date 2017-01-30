#include "toolbox.h"

ToolBox::ToolBox(QObject *parent) : QObject(parent)
{

}

void ToolBox::addTools(QVector<std::shared_ptr<tools::Tool> > &tools)
{
    tools.append(tools);
}




std::weak_ptr<tools::Tool> ToolBox::getTool1() const
{
    return tool1;
}
void ToolBox::setTool1(const std::weak_ptr<tools::Tool> &value)
{
    tool1 = value;
}



std::weak_ptr<tools::Tool> ToolBox::getTool2() const
{
    return tool2;
}
void ToolBox::setTool2(const std::weak_ptr<tools::Tool> &value)
{
    tool2 = value;
}

QVector<std::shared_ptr<tools::Tool> > ToolBox::getTools() const
{
    return tools;
}
