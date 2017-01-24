#ifndef DRAWINGTABFORM_H
#define DRAWINGTABFORM_H

#include <QMainWindow>

namespace Ui {
class DrawingTabForm;
}

class DrawingTabForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit DrawingTabForm(QWidget *parent = 0);
    ~DrawingTabForm();

private:
    Ui::DrawingTabForm *ui;
};

#endif // DRAWINGTABFORM_H
