#ifndef DRAWINGAREA_H
#define DRAWINGAREA_H

#include <memory>

#include <QHBoxLayout>
#include <QLabel>
#include <QMouseEvent>
#include <QScrollArea>

#include <image/image.h>



class DrawingArea : public QScrollArea
{
    Q_OBJECT
public:
    explicit DrawingArea(QWidget *parent = 0);

    bool eventFilter(QObject *, QEvent *);

    std::shared_ptr<Image> getImage() const;
    void setImage(const std::shared_ptr<Image> &value);

signals:
    void mouseButtonClicked(QMouseEvent *mouseEvent);
    void mouseMoved(QMouseEvent *mouseEvent);

public slots:
    void imageChangedSlot(std::weak_ptr<Image> image);
    void updateSlot();

private:
    QHBoxLayout *layout;
    QLabel *imageLabel;
    std::shared_ptr<Image> image;
};

#endif // DRAWINGAREA_H
