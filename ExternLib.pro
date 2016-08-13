#-------------------------------------------------
#
# Project created by QtCreator 2016-07-23T10:53:58
#
#-------------------------------------------------

QT       += widgets

TARGET = ExternLib
TEMPLATE = lib

DEFINES += EXTERNLIB_LIBRARY

SOURCES += externlib.cpp \
    simplealgo.cpp

HEADERS += externlib.h \
    libdatadef.h \
    ialgorithm.h \
    algargs.h \
    simplealgo.h \
    icaptureopr.h \
    irenderopr.h \
    cameraparameterdef.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}


LIBS    += -LH:/opencv/build/x86/vc9/lib -lopencv_core245  -lopencv_highgui245 -lopencv_imgproc245 -lopencv_ml245

INCLUDEPATH += H:/opencv/build/include
INCLUDEPATH += H:/opencv/build/include/opencv
