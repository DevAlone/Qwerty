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
    layer.cpp \
    image.cpp \
    maintabwidget.cpp \
    drawingtabform.cpp \
    filterstabform.cpp

HEADERS  += mainwindow.h \
    layer.h \
    image.h \
    maintabwidget.h \
    drawingtabform.h \
    filterstabform.h

FORMS    += mainwindow.ui \
    drawingtabform.ui \
    filterstabform.ui

CONFIG += c++14
