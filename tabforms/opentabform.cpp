#include "opentabform.h"
#include "ui_opentabform.h"

#include <QFileDialog>
#include <QMessageBox>
#include <mainwindow.h>
#include <QDebug>
#include <maintabwidget.h>

OpenTabForm::OpenTabForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OpenTabForm)
{
    ui->setupUi(this);

    connect(this, SIGNAL(invalidFilename(QString)), this, SLOT(invalidFilename_slot()));
}

OpenTabForm::~OpenTabForm()
{
    delete ui;
}

void OpenTabForm::on_pushButtonFromFile_clicked()
{
    QString filename =
            QFileDialog::getOpenFileName(this, tr("Open image"), "", tr("Image files (*.png *.jpg)"));

    ui->lineEditAddress->setText(filename);
}

void OpenTabForm::on_pushButton_clicked()
{
    QString filename = ui->lineEditAddress->text();
    if(filename.length() < 1) {
        emit invalidFilename(filename);
        return;
    }
    QPixmap pixmap(filename);
    if(!pixmap) {
        emit invalidFilename(filename);
        return;
    }

    emit pixmapOpened(pixmap);
}

void OpenTabForm::invalidFilename_slot()
{
    QMessageBox::warning(this, tr("Error"), tr("Invalid filname"));
}
