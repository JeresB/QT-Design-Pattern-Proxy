#-------------------------------------------------
#
# Project created by QtCreator 2017-10-10T08:18:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proxy
TEMPLATE = app


SOURCES += main.cpp\
        imageproxywindow.cpp \
    image.cpp \
    imagereader.cpp \
    imagereaderproxy.cpp

HEADERS  += imageproxywindow.h \
    image.h \
    imagereader.h \
    imagereaderproxy.h
