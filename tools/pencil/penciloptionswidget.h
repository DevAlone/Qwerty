#ifndef PENCILOPTIONSWIDGET_H
#define PENCILOPTIONSWIDGET_H

#include <QtGui>
#include <QLineEdit>
#include <QPushButton>

#include "toolwidgets/tooloptionswidget.h"
#include "tools/pencil/penciloptions.h"

namespace tools {
    class PencilOptions;
}

class PencilOptionsWidget : public ToolOptionsWidget
{
    Q_OBJECT
public:
    explicit PencilOptionsWidget(tools::PencilOptions *pencilOptions, QWidget *parent = 0);

signals:

private slots:
    void pushButtonChooseColorClicked();
    void lineEditSizeTextEdited(const QString& text);
public slots:
    void setSize(unsigned int size);
    void setColor(QColor color);

private:
    tools::PencilOptions *pencilOptions;

    QLineEdit *lineEditSize;
    QPushButton *pushButtonChooseColor;
};

#endif // PENCILOPTIONSWIDGET_H
