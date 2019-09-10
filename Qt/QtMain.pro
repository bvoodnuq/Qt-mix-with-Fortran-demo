QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET   = QtMain
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS
SOURCES += main.cpp \
           CallForThread.cpp \
           QtMain.cpp
           
HEADERS  += QtMain.h \
            CallFor.h \
            CallForThread.h \
            
FORMS    += QtMain.ui
