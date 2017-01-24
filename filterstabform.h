#ifndef FILTERSTABFORM_H
#define FILTERSTABFORM_H

#include <QMainWindow>

namespace Ui {
class FiltersTabForm;
}

class FiltersTabForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit FiltersTabForm(QWidget *parent = 0);
    ~FiltersTabForm();

private:
    Ui::FiltersTabForm *ui;
};

#endif // FILTERSTABFORM_H
