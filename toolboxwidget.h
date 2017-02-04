#ifndef TOOLBOXWIDGET_H
#define TOOLBOXWIDGET_H
#include <memory>

#include "toolbox.h"
#include "toolbutton.h"

#include <QDockWidget>
#include <QHBoxLayout>
#include <QToolButton>
#include <QWidget>

#include <QDebug>

class ToolBoxWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ToolBoxWidget(QWidget *parent = 0);

    std::shared_ptr<ToolBox> getToolBox() const;
    void setToolBox(const std::shared_ptr<ToolBox> &value);

signals:

public slots:

private slots:
    void toolsChanged(QVector<std::shared_ptr<tools::Tool>> tools);
    void tool1Changed(std::weak_ptr<tools::Tool> newTool);
    void tool2Changed(std::weak_ptr<tools::Tool> newTool);

    void toolButton1Clicked();
    void toolButton2Clicked();
    void toolButtonClicked(int number);
private:
    std::shared_ptr<ToolBox> toolbox;
    QList<ToolButton *> buttons;

    QHBoxLayout *mainLayout;
    QHBoxLayout *toolButtonsLayout;
    QWidget *toolBoxContentWidget;
    //QPanel *toolOptionsPanel;
};

#endif // TOOLBOXWIDGET_H
