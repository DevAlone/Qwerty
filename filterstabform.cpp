#include "filterstabform.h"
#include "ui_filterstabform.h"

FiltersTabForm::FiltersTabForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FiltersTabForm)
{
    ui->setupUi(this);
}

FiltersTabForm::~FiltersTabForm()
{
    delete ui;
}
