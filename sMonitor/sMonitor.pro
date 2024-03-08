#-------------------------------------------------
#
# Project created by QtCreator 2021-09-01T00:07:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sMonitor
TEMPLATE = app


SOURCES += main.cpp\
        menu.cpp \
    steng.cpp \
    mythread.cpp \
    click_lable.cpp \
    fileIndex.cpp \
    fullShow.cpp \
    fracktread.cpp

HEADERS  += menu.h \
    mythread.h \
    steng.h \
    click_lable.h \
    fileIndex.h \
    fullShow.h \
    frackthread.h

FORMS    += menu.ui \
    fileIndex.ui \
    fullShow.ui


RESOURCES += \
    images.qrc

INCLUDEPATH += /usr/local/include

LIBS += -L/usr/local/lib/libopencv_highgui.so \
           /usr/local/lib/libopencv_core.so \
           /usr/local/lib/libopencv_imgproc.so \
            /usr/local/lib/libopencv_imgcodecs.so \
            /usr/local/lib/libopencv_face.so \
            /usr/local/lib/libopencv_objdetect.so \
            /usr/local/lib/libopencv_videoio.so

#INCLUDEPATH += /usr/local/arm/opencv-arm/include \
#               /usr/local/arm/opencv-arm/include/opencv \
#               /usr/local/arm/opencv-arm/include/opencv2

#LIBS += /usr/local/arm/opencv-arm/lib/libopencv_highgui.so \
#            /usr/local/arm/opencv-arm/lib/libopencv_core.so \
#            /usr/local/arm/opencv-arm/lib/libopencv_imgproc.so \
#            /usr/local/arm/opencv-arm/lib/libopencv_imgcodecs.so \
#            /usr/local/arm/opencv-arm/lib/libopencv_video.so \
#            /usr/local/arm/opencv-arm/lib/libopencv_videoio.so \
#            /usr/local/arm/opencv-arm/lib/libopencv_objdetect.so

#LIBS += `pkg-config --cflags --libs opencv`
