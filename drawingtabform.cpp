#include "drawingtabform.h"
#include "ui_drawingtabform.h"

DrawingTabForm::DrawingTabForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DrawingTabForm)
{
    ui->setupUi(this);
}

DrawingTabForm::~DrawingTabForm()
{
    delete ui;
}
