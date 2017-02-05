#-------------------------------------------------
#
# Project created by QtCreator 2017-01-22T19:18:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qwerty
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    maintabwidget.cpp \
    tabforms/drawingtabform.cpp \
    tabforms/filterstabform.cpp \
    image/image.cpp \
    image/layer.cpp \
    painter.cpp \
    tabforms/drawingarea.cpp \
    tabforms/opentabform.cpp \
    backgroundpainter.cpp \
    tool.cpp \
    tooloptions.cpp \
    toolbox.cpp \
    toolwidgets/toolboxwidget.cpp \
    toolwidgets/toolbutton.cpp \
    toolwidgets/tooloptionswidget.cpp

HEADERS  += mainwindow.h \
    maintabwidget.h \
    tabforms/drawingtabform.h \
    tabforms/filterstabform.h \
    image/image.h \
    image/layer.h \
    painter.h \
    tabforms/drawingarea.h \
    tabforms/opentabform.h \
    backgroundpainter.h \
    tool.h \
    tooloptions.h \
    toolbox.h \
    tools/tools.h \
    toolwidgets/toolboxwidget.h \
    toolwidgets/toolbutton.h \
    toolwidgets/tooloptionswidget.h

FORMS    += mainwindow.ui \
    tabforms/drawingtabform.ui \
    tabforms/filterstabform.ui \
    tabforms/opentabform.ui



HEADERS += \
        tools/pencil/pencil.h \
        tools/pencil/penciloptions.h \
    tools/pencil/penciloptionswidget.h

SOURCES += \
        tools/pencil/pencil.cpp \
        tools/pencil/penciloptions.cpp \
    tools/pencil/penciloptionswidget.cpp



CONFIG += c++14
