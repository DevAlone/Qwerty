/********************************************************************************
** Form generated from reading UI file 'filterstabform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERSTABFORM_H
#define UI_FILTERSTABFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FiltersTabForm
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QTreeView *treeView;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QLabel *labelImage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FiltersTabForm)
    {
        if (FiltersTabForm->objectName().isEmpty())
            FiltersTabForm->setObjectName(QStringLiteral("FiltersTabForm"));
        FiltersTabForm->resize(800, 600);
        centralwidget = new QWidget(FiltersTabForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeView = new QTreeView(splitter);
        treeView->setObjectName(QStringLiteral("treeView"));
        splitter->addWidget(treeView);
        scrollArea_2 = new QScrollArea(splitter);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 86, 525));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        splitter->addWidget(scrollArea_2);
        scrollArea = new QScrollArea(splitter);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 416, 525));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelImage = new QLabel(scrollAreaWidgetContents);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelImage->sizePolicy().hasHeightForWidth());
        labelImage->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(labelImage);

        scrollArea->setWidget(scrollAreaWidgetContents);
        splitter->addWidget(scrollArea);

        horizontalLayout_2->addWidget(splitter);

        FiltersTabForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FiltersTabForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        FiltersTabForm->setMenuBar(menubar);
        statusbar = new QStatusBar(FiltersTabForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        FiltersTabForm->setStatusBar(statusbar);

        retranslateUi(FiltersTabForm);

        QMetaObject::connectSlotsByName(FiltersTabForm);
    } // setupUi

    void retranslateUi(QMainWindow *FiltersTabForm)
    {
        FiltersTabForm->setWindowTitle(QApplication::translate("FiltersTabForm", "MainWindow", Q_NULLPTR));
        labelImage->setText(QApplication::translate("FiltersTabForm", "image", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FiltersTabForm: public Ui_FiltersTabForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERSTABFORM_H
