#ifndef MAINTABWIDGET_H
#define MAINTABWIDGET_H

#include <QTabBar>
#include <QTabWidget>

class MainTabBar : public QTabBar
{
public:
    explicit MainTabBar(QWidget *parent = 0);

protected:
    QSize tabSizeHint(int index) const;
};

class MainTabWidget : public QTabWidget
{
public:
    explicit MainTabWidget(QWidget *parent = 0);
};


#endif // MAINTABWIDGET_H
