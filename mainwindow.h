#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "tabforms/drawingtabform.h"
#include "tabforms/filterstabform.h"

#include <QMainWindow>

#include <tabforms/opentabform.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    Painter *getPainter() const;


private slots:
    void pixmapOpened(const QPixmap &pixmap);

private:
    Ui::MainWindow *ui;
    DrawingTabForm *drawingTabForm;
    FiltersTabForm *filtersTabForm;
    OpenTabForm *openTabForm;

    DrawingArea *drawingArea;

    Painter *painter;
};

#endif // MAINWINDOW_H
