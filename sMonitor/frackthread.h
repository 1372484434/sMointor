#ifndef FRACKTHREAD
#define FRACKTHREAD

#include <QWidget>
#include <QDebug>
#include <string>
#include <QDateTime>
#include <iostream>
#include "steng.h"
#include <QTimer>
#include  <QThread>
#include <steng.h>
#include <QTime>
#include <QLabel>
#include <QCheckBox>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/face.hpp>
using namespace std;
using namespace cv;


class frackthread: public QThread
{
private slots:
    void CaptureOpen();

public:
    frackthread();
    void run();
    void face_tracking(void);
    void eye_tracking(void);

    setEng *sEng;

    QTimer *capTimer;

    VideoCapture cap;
    Mat frame;

    QLabel *grea;
    QCheckBox *checkbox;
    QCheckBox *checkbox2;
    QCheckBox *checkbox3;
    QCheckBox *checkbox4;
    QCheckBox *checkbox5;
    QCheckBox *checkbox6;
    QCheckBox *checkbox7;
    QCheckBox *checkbox8;
    QCheckBox *checkbox9;

    VideoWriter writer;
    VideoWriter *writer2;
    bool VidFlag = true;


    CascadeClassifier cascade1,nestedCascade1;
    double scale1=2.0;

    int distance1=10;
    int test1=1;
    int distance2=5;
};
#endif // FRACKTHREAD

