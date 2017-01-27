#ifndef OPENTABFORM_H
#define OPENTABFORM_H

#include <QMainWindow>

namespace Ui {
class OpenTabForm;
}

class OpenTabForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit OpenTabForm(QWidget *parent = 0);
    ~OpenTabForm();

signals:
    void invalidFilename(const QString &filename);
    void pixmapOpened(const QPixmap &pixmap);

private slots:
    void on_pushButtonFromFile_clicked();

    void on_pushButton_clicked();

    void invalidFilename_slot();

private:
    Ui::OpenTabForm *ui;
};

#endif // OPENTABFORM_H
