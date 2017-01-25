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
    drawingtabform.cpp \
    filterstabform.cpp \
    builds/build-qwerty-Desktop-Debug/moc_drawingtabform.cpp \
    builds/build-qwerty-Desktop-Debug/moc_fakemainwindow.cpp \
    builds/build-qwerty-Desktop-Debug/moc_filterstabform.cpp \
    builds/build-qwerty-Desktop-Debug/moc_image.cpp \
    builds/build-qwerty-Desktop-Debug/moc_layer.cpp \
    builds/build-qwerty-Desktop-Debug/moc_mainwindow.cpp \
    builds/build-qwerty-Desktop-Debug/moc_widgetwithtoolbars.cpp \
    builds/build-qwerty-win32-Release/release/moc_drawingtabform.cpp \
    builds/build-qwerty-win32-Release/release/moc_filterstabform.cpp \
    builds/build-qwerty-win32-Release/release/moc_image.cpp \
    builds/build-qwerty-win32-Release/release/moc_mainwindow.cpp \
    builds/build-qwerty-win32-Release/qwerty_plugin_import.cpp \
    image/image.cpp \
    image/layer.cpp \
    dockwidgetarea.cpp \
    widgetwithtoolbars.cpp

HEADERS  += mainwindow.h \
    maintabwidget.h \
    drawingtabform.h \
    filterstabform.h \
    builds/build-qwerty-Desktop-Debug/ui_drawingtabform.h \
    builds/build-qwerty-Desktop-Debug/ui_filterstabform.h \
    builds/build-qwerty-Desktop-Debug/ui_mainwindow.h \
    builds/build-qwerty-win32-Release/ui_drawingtabform.h \
    builds/build-qwerty-win32-Release/ui_filterstabform.h \
    builds/build-qwerty-win32-Release/ui_mainwindow.h \
    image/image.h \
    image/layer.h \
    widgetwithtoolbars.h

FORMS    += mainwindow.ui \
    drawingtabform.ui \
    filterstabform.ui

CONFIG += c++14
