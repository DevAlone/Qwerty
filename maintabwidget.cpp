#include "maintabwidget.h"


MainTabWidget::MainTabWidget(QWidget *parent)
    : QTabWidget(parent)
{
    setTabBar(new MainTabBar());
}

MainTabBar::MainTabBar(QWidget *parent)
    : QTabBar(parent)
{

}

QSize MainTabBar::tabSizeHint(int index) const
{
    //QSize windowSize = window()->size();
    QSize size = QTabBar::tabSizeHint(index);

    size.setWidth(size.width() + 15);
    size.setHeight(size.height() + 15);
    return size;
}
