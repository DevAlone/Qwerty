#include "toolbutton.h"

ToolButton::ToolButton(QWidget *parent, std::weak_ptr<tools::Tool> tool)
    : QToolButton(parent)
{
    this->tool = tool;
}

std::weak_ptr<tools::Tool> ToolButton::getTool() const
{
    return tool;
}

void ToolButton::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::RightButton) {
        emit rightClicked();
        e->accept();
    } else
        QToolButton::mousePressEvent(e);
}
