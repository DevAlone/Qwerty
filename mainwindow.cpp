#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDockWidget>
#include <QToolBar>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    drawingTabForm = new DrawingTabForm(this);
    ui->tabWidget->addTab(drawingTabForm, tr("Drawing"));
    filtersTabForm = new FiltersTabForm(this);
    ui->tabWidget->addTab(filtersTabForm, tr("Filters"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

