#ifndef TOOLBOXWIDGET_H
#define TOOLBOXWIDGET_H
#include <memory>

#include "toolbox.h"

#include <QToolButton>
#include <QWidget>

class ToolBoxWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ToolBoxWidget(QWidget *parent = 0);

    std::shared_ptr<ToolBox> getToolbox() const;
    void setToolbox(const std::shared_ptr<ToolBox> &value);

signals:

public slots:

private slots:
    void toolsChanged(QVector<std::shared_ptr<tools::Tool>>);
    void tool1Changed(std::weak_ptr<tools::Tool> newTool);
    void tool2Changed(std::weak_ptr<tools::Tool> newTool);
private:
    std::shared_ptr<ToolBox> toolbox;
    QVector<ToolButton> buttons;
};

#endif // TOOLBOXWIDGET_H
