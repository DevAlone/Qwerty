#ifndef DRAWINGTABFORM_H
#define DRAWINGTABFORM_H

#include "drawingarea.h"
#include "painter.h"

#include <QMainWindow>

#include <image/image.h>

namespace Ui {
class DrawingTabForm;
}

class DrawingTabForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit DrawingTabForm(QWidget *parent = 0);
    ~DrawingTabForm();

    DrawingArea * getDrawingArea();

private:
    Ui::DrawingTabForm *ui;
};

#endif // DRAWINGTABFORM_H
