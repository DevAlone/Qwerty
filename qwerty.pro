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
    tools/tool.cpp \
    tools/pencil.cpp \
    tools/tooloptions.cpp \
    tools/penciloptions.cpp \
    toolbox.cpp \
    toolboxwidget.cpp

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
    tools/tool.h \
    tools/pencil.h \
    tools/tooloptions.h \
    tools/penciloptions.h \
    toolbox.h \
    tools/tools.h \
    toolboxwidget.h

FORMS    += mainwindow.ui \
    tabforms/drawingtabform.ui \
    tabforms/filterstabform.ui \
    tabforms/opentabform.ui

CONFIG += c++14
