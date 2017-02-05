#ifndef TOOLOPTIONSWIDGET_H
#define TOOLOPTIONSWIDGET_H

#include <QWidget>
#include <QLabel>


class ToolOptionsWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ToolOptionsWidget(QWidget *parent = 0);

    void focusOutEvent(QFocusEvent *event);

signals:

public slots:


private:

};

#endif // TOOLOPTIONSWIDGET_H
