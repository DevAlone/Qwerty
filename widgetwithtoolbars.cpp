#include "widgetwithtoolbars.h"

#include <QToolBar>

WidgetWithToolbars::WidgetWithToolbars(QWidget *parent) : QWidget(parent)
{
    toolLayout = new QBoxLayout(QBoxLayout::TopToBottom, this);
    //set margins to zero so the toolbar touches the widget's edges
    toolLayout->setContentsMargins(0, 0, 0, 0);

    toolbar = new QToolBar;
    toolLayout->addWidget(toolbar);

    //use a different layout for the contents so it has normal margins
    //contentsLayout = new ...
    //toolLayout->addLayout(contentsLayout);
}
