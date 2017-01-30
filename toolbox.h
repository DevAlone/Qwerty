#ifndef TOOLBOX_H
#define TOOLBOX_H
#include <memory>

#include <QObject>
#include <QVector>

#include <tools/tools.h>

class ToolBox : public QObject
{
    Q_OBJECT
public:
    explicit ToolBox(QObject *parent = 0);

    void addTools(QVector<std::shared_ptr<tools::Tool>> & tools);

    std::weak_ptr<tools::Tool> getTool1() const;
    void setTool1(const std::weak_ptr<tools::Tool> &value);

    std::weak_ptr<tools::Tool> getTool2() const;
    void setTool2(const std::weak_ptr<tools::Tool> &value);

    QVector<std::shared_ptr<tools::Tool> > getTools() const;

signals:
    void toolsChanged(QVector<std::shared_ptr<tools::Tool>>);
    void tool1Changed(std::weak_ptr<tools::Tool> newTool);
    void tool2Changed(std::weak_ptr<tools::Tool> newTool);

public slots:

private:
    QVector<std::shared_ptr<tools::Tool>> tools;
    std::weak_ptr<tools::Tool> tool1; // для ЛКМ
    std::weak_ptr<tools::Tool> tool2; // для ПКМ
    //std::weak_ptr<tools::Tool> tool3;
};

#endif // TOOLBOX_H
