#include "tooloptionswidget.h"



ToolOptionsWidget::ToolOptionsWidget(QWidget *parent) : QWidget(parent)
{

}

void ToolOptionsWidget::focusOutEvent(QFocusEvent *event)
{
    close();

}

