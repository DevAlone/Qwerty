#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDockWidget>
#include <QToolBar>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    painter = new Painter(this);


    drawingTabForm = new DrawingTabForm(this);
    ui->tabWidget->addTab(drawingTabForm, tr("Drawing"));
    filtersTabForm = new FiltersTabForm(this);
    ui->tabWidget->addTab(filtersTabForm, tr("Filters"));
    openTabForm = new OpenTabForm(this);
    ui->tabWidget->addTab(openTabForm, tr("&Open"));

    drawingArea = drawingTabForm->getDrawingArea();

    //drawingTabForm->getDrawingArea()->setImage(painter->getImage());
    connect(painter, SIGNAL(imageChanged(std::weak_ptr<Image>)),
            drawingArea, SLOT(imageChangedSlot(std::weak_ptr<Image>)));
    connect(painter, SIGNAL(imageUpdated()),
            drawingArea, SLOT(updateSlot()), Qt::QueuedConnection);

    connect(drawingArea, SIGNAL(mouseButtonPressed(QMouseEvent*)),
            painter, SLOT(mouseButtonPressed(QMouseEvent*)));
    connect(drawingArea, SIGNAL(mouseMoved(QMouseEvent*)),
            painter, SLOT(mouseMoved(QMouseEvent*)));
    connect(drawingArea, SIGNAL(mouseButtonReleased(QMouseEvent*)),
            painter, SLOT(mouseButtonReleased(QMouseEvent*)));

//    connect(openTabForm, SIGNAL(pixmapOpened(const QPixmap&)),
//            this, SLOT(pixmapOpened(const QPixmap &)));
    connect(openTabForm, SIGNAL(pixmapOpened(QPixmap)),
            this, SLOT(pixmapOpened(QPixmap)));


    painter->setImage(std::make_shared<Image>(700, 700, Qt::black));

    drawingTabForm->getToolBoxWidget()->setToolBox(getPainter()->getToolbox());
//    QVector<std::shared_ptr<tools::Tool>> tools = {
//        std::make_shared<tools::Pencil>(),
//        std::make_shared<tools::Pencil>(),
//        std::make_shared<tools::Pencil>(),
//    };
//    getPainter()->getToolbox()->addTools(tools);
}

MainWindow::~MainWindow()
{
    delete ui;
}

Painter *MainWindow::getPainter() const
{
    return painter;
}

void MainWindow::pixmapOpened(const QPixmap &pixmap)
{
    std::shared_ptr<Image> image = std::make_shared<Image>(pixmap);


    painter->setImage(image);
}

