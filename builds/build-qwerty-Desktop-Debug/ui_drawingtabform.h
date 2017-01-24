/********************************************************************************
** Form generated from reading UI file 'drawingtabform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWINGTABFORM_H
#define UI_DRAWINGTABFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrawingTabForm
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelImage;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QPushButton *pushButton_2;
    QDockWidget *toolbar;
    QWidget *dockWidgetContents_4;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QToolButton *toolButton_2;

    void setupUi(QMainWindow *DrawingTabForm)
    {
        if (DrawingTabForm->objectName().isEmpty())
            DrawingTabForm->setObjectName(QStringLiteral("DrawingTabForm"));
        DrawingTabForm->resize(590, 414);
        centralwidget = new QWidget(DrawingTabForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 515, 296));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelImage = new QLabel(scrollAreaWidgetContents);
        labelImage->setObjectName(QStringLiteral("labelImage"));

        horizontalLayout_2->addWidget(labelImage);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        DrawingTabForm->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DrawingTabForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DrawingTabForm->setStatusBar(statusbar);
        dockWidget = new QDockWidget(DrawingTabForm);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        pushButton_2 = new QPushButton(dockWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 80, 21, 101));
        dockWidget->setWidget(dockWidgetContents);
        DrawingTabForm->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        toolbar = new QDockWidget(DrawingTabForm);
        toolbar->setObjectName(QStringLiteral("toolbar"));
        toolbar->setStyleSheet(QLatin1String("QDockWidget {\n"
"    /*border: 1px solid #000;*/\n"
"/*	background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(100, 100, 100, 100), stop:1 rgba(200, 200, 200, 100));*/\n"
"/*    titlebar-close-icon: url(close.png);\n"
"    titlebar-normal-icon: url(undock.png);*/\n"
"}\n"
"\n"
"QDockWidget::title {\n"
"   /* text-align: left; /* align the text to the left */\n"
"/*    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(100, 100, 100, 100), stop:1 rgba(200, 200, 200, 100));\n"
"/*    padding-left: 5px;*/\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button {\n"
"    /*border: 1px solid transparent;\n"
"    background: darkgray;\n"
"    padding: 0px;*/\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover {\n"
"/*    background: gray;*/\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed {\n"
"/*    padding: 1px -1px -1px 1px;*/\n"
"}"));
        toolbar->setFloating(false);
        toolbar->setFeatures(QDockWidget::DockWidgetMovable);
        toolbar->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        gridLayout = new QGridLayout(dockWidgetContents_4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(dockWidgetContents_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        toolButton = new QToolButton(dockWidgetContents_4);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout->addWidget(toolButton, 0, 1, 1, 1);

        toolButton_2 = new QToolButton(dockWidgetContents_4);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        gridLayout->addWidget(toolButton_2, 0, 2, 1, 1);

        toolbar->setWidget(dockWidgetContents_4);
        DrawingTabForm->addDockWidget(static_cast<Qt::DockWidgetArea>(4), toolbar);

        retranslateUi(DrawingTabForm);

        QMetaObject::connectSlotsByName(DrawingTabForm);
    } // setupUi

    void retranslateUi(QMainWindow *DrawingTabForm)
    {
        DrawingTabForm->setWindowTitle(QApplication::translate("DrawingTabForm", "MainWindow", 0));
        labelImage->setText(QApplication::translate("DrawingTabForm", "Image will be here", 0));
        pushButton_2->setText(QApplication::translate("DrawingTabForm", "PushButton", 0));
        toolbar->setWindowTitle(QApplication::translate("DrawingTabForm", "too&lbar", 0));
        pushButton->setText(QApplication::translate("DrawingTabForm", "PushButton", 0));
        toolButton->setText(QApplication::translate("DrawingTabForm", "...", 0));
        toolButton_2->setText(QApplication::translate("DrawingTabForm", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class DrawingTabForm: public Ui_DrawingTabForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWINGTABFORM_H
