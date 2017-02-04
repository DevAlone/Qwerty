#ifndef TOOLBUTTON_H
#define TOOLBUTTON_H
#include <memory>

#include <QMouseEvent>
#include <QToolButton>
#include <QWidget>

#include <tools/tool.h>
#include <tools/tools.h>

class ToolButton : public QToolButton
{
    Q_OBJECT
public:
    explicit ToolButton(QWidget *parent, std::weak_ptr<tools::Tool> tool);

    std::weak_ptr<tools::Tool> getTool() const;


signals:
    void rightClicked();
public slots:
    void mousePressEvent(QMouseEvent * e);

private:
    std::weak_ptr<tools::Tool> tool;
};

#endif // TOOLBUTTON_H
