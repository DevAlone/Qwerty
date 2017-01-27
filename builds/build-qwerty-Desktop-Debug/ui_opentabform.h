/********************************************************************************
** Form generated from reading UI file 'opentabform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENTABFORM_H
#define UI_OPENTABFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenTabForm
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditAddress;
    QPushButton *pushButtonFromFile;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OpenTabForm)
    {
        if (OpenTabForm->objectName().isEmpty())
            OpenTabForm->setObjectName(QStringLiteral("OpenTabForm"));
        OpenTabForm->resize(536, 346);
        centralwidget = new QWidget(OpenTabForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEditAddress = new QLineEdit(centralwidget);
        lineEditAddress->setObjectName(QStringLiteral("lineEditAddress"));

        horizontalLayout->addWidget(lineEditAddress);

        pushButtonFromFile = new QPushButton(centralwidget);
        pushButtonFromFile->setObjectName(QStringLiteral("pushButtonFromFile"));

        horizontalLayout->addWidget(pushButtonFromFile);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 201, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        OpenTabForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OpenTabForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 536, 28));
        OpenTabForm->setMenuBar(menubar);
        statusbar = new QStatusBar(OpenTabForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        OpenTabForm->setStatusBar(statusbar);

        retranslateUi(OpenTabForm);

        QMetaObject::connectSlotsByName(OpenTabForm);
    } // setupUi

    void retranslateUi(QMainWindow *OpenTabForm)
    {
        OpenTabForm->setWindowTitle(QApplication::translate("OpenTabForm", "MainWindow", 0));
        pushButtonFromFile->setText(QApplication::translate("OpenTabForm", "from file", 0));
        pushButton->setText(QApplication::translate("OpenTabForm", "Open", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenTabForm: public Ui_OpenTabForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENTABFORM_H
