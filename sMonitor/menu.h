#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "fops.h"
#include <QMainWindow>
#include "steng.h"
#include <QDebug>
#include "mythread.h"
#include <string>
#include <QDateTime>
#include <iostream>
#include "fileIndex.h"
#include "fullShow.h"
#include "frackthread.h"
#include <QTimer>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/face.hpp>
using namespace std;
using namespace cv;

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();
//    void face_tracking(void);
//    void eye_tracking(void);

private slots:
    void on_swt_Control_bt_clicked();

    void on_file_Manage_bt_clicked();

    void on_turn_up_bt_pressed();

    void on_turn_right_bt_pressed();

    void on_turn_left_bt_pressed();

    void on_turn_down_bt__pressed();

    void on_turn_reset_bt_clicked();

    void on_get_photo_bt_clicked();

    void on_get_video_bt_clicked();

//    void CaptureOpen();


private:
    Ui::menu *ui;
    bool swt_Control_flag=true;
public:
    myThread* myThread1;  //线程对象
    frackthread* thread2;  //线程对象
    setEng sEng;
    int init_v=70;

    QTimer *capTimer;

//      VideoCapture cap;
//      Mat frame;


    VideoWriter writer;

   // bool VidFlag = true;

//    CascadeClassifier cascade1,nestedCascade1;
    double scale1=2.0;
    bool tryfilp1;
    fileIndex *fIndex;

    int distance1=0;
    int test1=1;
    int distance2=0;


};

#endif // MENU_H
