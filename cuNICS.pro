#-------------------------------------------------
#
# Project created by QtCreator 2017-03-02T23:05:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cuNICS
TEMPLATE = app


SOURCES += main.cpp \
    login.cpp \
    psmenu.cpp \
    viewinfo.cpp \
    viewsummary.cpp \
    editattributes.cpp \
    applyraise.cpp

HEADERS  += \
    login.h \
    psmenu.h \
    viewinfo.h \
    viewsummary.h \
    editattributes.h \
    applyraise.h

FORMS    += \
    login.ui \
    psmenu.ui \
    viewinfo.ui \
    viewsummary.ui \
    editattributes.ui \
    applyraise.ui

RESOURCES += \
    pic.qrc
