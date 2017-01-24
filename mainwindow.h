#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "drawingtabform.h"
#include "filterstabform.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


private:
    Ui::MainWindow *ui;
    DrawingTabForm *drawingTabForm;
    FiltersTabForm *filtersTabForm;
};

#endif // MAINWINDOW_H
