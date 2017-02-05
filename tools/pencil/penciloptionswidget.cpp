#include "penciloptionswidget.h"

#include <QColorDialog>
#include <QHBoxLayout>

PencilOptionsWidget::PencilOptionsWidget(tools::PencilOptions *pencilOptions, QWidget *parent)
    : ToolOptionsWidget(parent)
{
    this->pencilOptions = pencilOptions;

    QHBoxLayout * lay = new QHBoxLayout(this);

    lineEditSize = new QLineEdit();
    pushButtonChooseColor = new QPushButton();

    lay->addWidget(lineEditSize);
    lay->addWidget(pushButtonChooseColor);

    connect(lineEditSize, SIGNAL(textChanged(QString)), this, SLOT(lineEditSizeTextEdited(QString)));
    connect(pushButtonChooseColor, SIGNAL(clicked()), this, SLOT(pushButtonChooseColorClicked()));
}

void PencilOptionsWidget::pushButtonChooseColorClicked()
{
    QColor color = QColorDialog::getColor(Qt::black, this, tr("choose color"), QColorDialog::DontUseNativeDialog);

    setColor(color);
}

void PencilOptionsWidget::lineEditSizeTextEdited(const QString &text)
{
    bool isOk;
    unsigned int value = text.toUInt(&isOk);
    if(isOk)
        setSize(value);
}

void PencilOptionsWidget::setSize(unsigned int size)
{
    pencilOptions->size = size;
}

void PencilOptionsWidget::setColor(QColor color)
{
    pencilOptions->color = color;
}
