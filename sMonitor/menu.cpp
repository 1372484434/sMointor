#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    ui->swt_Control_bt->QToolButton::setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui->exp_Check_bt->QToolButton::setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui->file_Manage_bt->QToolButton::setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui->mode_Setup_bt->QToolButton::setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    //设置 menu 界面背景
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QPixmap(":/images/2.jpg")));
    this->setPalette(palette);

    sEng.backLrpos();
    sEng.backUdpos();




    myThread1 =new myThread();   //分配空间
    myThread1->flag=true;
    myThread1->sEng=&sEng;
    
    thread2=new frackthread();  //子线程2：人脸追踪

    thread2->grea=ui->capArea_lb;
    thread2->checkbox=ui->checkBox;
    thread2->checkbox4=ui->checkBox_4;
    thread2->checkbox2=ui->checkBox_2;
    thread2->checkbox3=ui->checkBox_3;
    thread2->checkbox5=ui->checkBox_5;
    thread2->checkbox6=ui->checkBox_6;
    thread2->checkbox7=ui->checkBox_7;
    thread2->checkbox8=ui->checkBox_8;
    thread2->checkbox9=ui->checkBox_9;




    thread2->sEng=&sEng;
    thread2->start();














}

menu::~menu()
{
    delete ui;
}

void menu::on_swt_Control_bt_clicked()   //子线程1：舵机自动旋转
{
    if(swt_Control_flag)
    {
    swt_Control_flag = false;
    ui->swt_Control_bt->setText("切换手动");
    ui->ctl_Panel_sw->setCurrentIndex(1);
     myThread1->flag=true;
     myThread1->v=50;
     myThread1->start();//通过当前线程对象调用槽函数start()函数启动子线程，当子线程被启动，这个run()函数也就在线程内部被调用了。




    }
    else
    {
        swt_Control_flag = true;
        ui->swt_Control_bt->setText("切换自动");
        ui->ctl_Panel_sw->setCurrentIndex(0);
        myThread1->flag=false;


    }
}

void menu::on_file_Manage_bt_clicked()
{
    fIndex = new fileIndex(this);
     fIndex->updatePicData("./photo");
     fIndex->updataVidData("./photo","./video");
     fIndex->show();
     this->hide();
}

void menu::on_turn_up_bt_pressed()
{
    qDebug()<<"turn up++++>";
    sEng.turnUp();

}

void menu::on_turn_right_bt_pressed()
{
    qDebug()<<"turn right++++>";
    sEng.turnRight();
}

void menu::on_turn_left_bt_pressed()
{
    qDebug()<<"turn left---->";
    sEng.turnLeft();
}

void menu::on_turn_down_bt__pressed()
{
    qDebug()<<"turn down---->";
    sEng.turnDown();
}

void menu::on_turn_reset_bt_clicked()
{
    sEng.backLrpos();
    sEng.backUdpos();
}

void menu::on_get_photo_bt_clicked()
{

        QDateTime curDateTime=QDateTime::currentDateTime();
        string strr= "./photo/";
        strr += curDateTime.toString("yyyy-MM-dd|hh:mm:ss").toStdString();
        strr +=".jpg";
        imwrite(strr,thread2->frame);

}

void menu::on_get_video_bt_clicked()
{
    if(this->thread2->VidFlag)
      {
          this->thread2->VidFlag = false;
          ui->get_video_bt->setText("关闭");


          QDateTime curDateTime=QDateTime::currentDateTime();

          string str = "./video/";
          str +=  curDateTime.toString("yyyy-MM-dd|hh:mm:ss").toStdString();
          str += ".avi";

          writer.open(str,CV_FOURCC('M','J','P','G'),30.0,Size(640,480),true);
          if(!(writer.isOpened()))
          {
              qDebug()<<"videowriter open fail";
          }
          qDebug() << "开始录制 ";
          this->thread2->writer2=&writer;


      }
      else
      {
         this->thread2->VidFlag = true;
          ui->get_video_bt->setText("录制");

          writer.release();
      }
}
//void menu::CaptureOpen(){

//    if(test1)
//    {
//    QDateTime curDateTime=QDateTime::currentDateTime();
//    string str = "./video/";
//    str += "01.avi";
//    writer.open(str,CV_FOURCC('M', 'J', 'P', 'G') ,30.0, Size(640,480),true);

//    //MJPG
//    if(!(writer.isOpened()))
//    {
//    cout << "videowriter open fail"<<endl;
//    }
//    cout << "yes" <<endl;

//    }
//    test1 = 0;

//    cap >>frame;


//    Mat frame1;
//    cvtColor(frame,frame1,CV_BGR2RGB);//用于在图像中不同的色彩空间进行转换，用于后续处理 three parameter 输入序列 输出序列 颜色映射码

//    QImage Qimage1 = QImage((const unsigned char *)(frame1.data),
//                    frame1.cols, frame1.rows,
//                    frame1.step,QImage::Format_RGB888);
//    QImage mirroredImage = Qimage1.mirrored(true, false);
//    ui->capArea_lb->setPixmap(QPixmap::fromImage(mirroredImage));
//        //ui->cap_Frame_lb->resize(Qimage1.size());
//    ui->capArea_lb->show();



//    if(!VidFlag)
//    {
//    //次数可以调整视频的帧数
//    writer << frame;
//    writer << frame;
//    writer << frame;
//    writer << frame;
//    }




//}
//void menu::face_tracking(void){
//    int i = 0;
//    double t = 0;
//    vector<Rect> faces, faces2;
//    const static Scalar colors[] = { CV_RGB(0,0,255),
//                                     CV_RGB(0,128,255),
//                                     CV_RGB(0,255,255),
//                                     CV_RGB(0,255,0),
//                                     CV_RGB(255,128,0),
//                                     CV_RGB(255,255,0),
//                                     CV_RGB(255,0,0),
//                                     CV_RGB(255,0,255)} ;
//    Mat gray1,smallImg(cvRound(frame.rows/scale1), cvRound(frame.cols/scale1), CV_8UC1 );
//    cvtColor(frame, gray1, CV_BGR2GRAY );
//    cv::resize(gray1, smallImg, Size(frame.cols / 3, frame.rows / 3));
//    equalizeHist( smallImg, smallImg );

//    t = (double)cvGetTickCount();

//    cascade1.detectMultiScale( smallImg, faces,
//                               1.6, 3, 0
//                               |CV_HAAR_SCALE_IMAGE
//                               ,Size(30, 30));
//      t = (double)cvGetTickCount() - t;
//      for( vector<Rect>::const_iterator r = faces.begin(); r != faces.end(); r++, i++ )
//       {
//         Mat smallImgROI;
//          vector<Rect> nestedObjects;
//          static Point center;
//           int radius;
//           double aspect_ratio = (double)r->width/r->height;
//            if( 0.75 < aspect_ratio && aspect_ratio < 1.3 )
//             {
//                 center.x = cvRound((r->x + r->width*0.5)*scale1)*1.5;
//                 center.y = cvRound((r->y + r->height*0.5)*scale1)*1.5;
//                  radius = cvRound((r->width + r->height)*0.25*scale1)*1.5;
//                  circle(frame, center, radius, Scalar(0,0,255), 3, 8, 0 );

//                  double x_offset,y_offset;
//                  double length;
//                  if(center.x<frame.rows&& center.y<frame.cols){
//                      x_offset=((((double)center.x)/(double)frame.rows)-0.65)*2;
//                      y_offset=((((double)center.y)/(double)frame.cols)-0.4)*2;
//                      length=72780/radius;
//                      cout<<"length:"<<length<<endl;
//                      cout<<"radius:"<<radius<<endl;
//                      cout<<"x_offset:"<<x_offset<<" "<<"y_offset:"<<y_offset<<endl;
//                      cout<<"frame.row:"<<frame.rows<<" "<<"frame.cols:"<<frame.cols<<endl;
//                      cout<<"center.x"<<center.x<<" "<<"center.y:"<<center.y<<endl;
//                  }

//                      if((x_offset>0)&&(x_offset<=1)){
//                          this->sEng.turnRight(x_offset);
//                      }
//                      if((x_offset<0)&&(x_offset>=-1)){
//                          this->sEng.turnLeft(x_offset);
//                      }

//                      if((y_offset>0)&&(y_offset<=1)){
//                          this->sEng.turnDown(y_offset);
//                      }
//                      if((y_offset<0)&&(y_offset>=-1)){
//                          this->sEng.turnUp(y_offset);
//                      }

//                      if((length/100)<distance1)
//                          on_get_photo_bt_clicked();
//                      if((length/100)<distance2){
//                          writer << frame;
//                          writer << frame;
//                          writer << frame;
//                          writer << frame;
//                          writer << frame;
//                          writer << frame;
//                          writer << frame;
//                          writer << frame;
//                          writer << frame;

//                      }

//              }
//              else
//                 cout << "no face" <<endl;

//            if( nestedCascade1.empty())
//                   continue;
//      }
//}
//void menu::eye_tracking(void){
//    int i = 0;
//    double t = 0;
//    vector<Rect> faces, faces2;
//    const static Scalar colors[] = { CV_RGB(0,0,255),
//                                     CV_RGB(0,128,255),
//                                     CV_RGB(0,255,255),
//                                     CV_RGB(0,255,0),
//                                     CV_RGB(255,128,0),
//                                     CV_RGB(255,255,0),
//                                     CV_RGB(255,0,0),
//                                     CV_RGB(255,0,255)} ;
//    Mat gray1,smallImg(cvRound(frame.rows/scale1), cvRound(frame.cols/scale1), CV_8UC1 );
//    cvtColor(frame, gray1, CV_BGR2GRAY );
//    cv::resize(gray1, smallImg, Size(frame.cols / 3, frame.rows / 3));
//    equalizeHist( smallImg, smallImg );

//    t = (double)cvGetTickCount();

//    nestedCascade1.detectMultiScale( smallImg, faces,
//                               1.6, 3, 0
//                               |CV_HAAR_SCALE_IMAGE
//                               ,Size(30, 30));
//      t = (double)cvGetTickCount() - t;
//      for( vector<Rect>::const_iterator r = faces.begin(); r != faces.end(); r++, i++ )
//       {
//         Mat smallImgROI;
//          vector<Rect> nestedObjects;
//          static Point center;
//           int radius;
//           double aspect_ratio = (double)r->width/r->height;
//            if( 0.75 < aspect_ratio && aspect_ratio < 1.3 )
//             {
//                 center.x = cvRound((r->x + r->width*0.5)*scale1)*1.5;
//                 center.y = cvRound((r->y + r->height*0.5)*scale1)*1.5;
//                  radius = cvRound((r->width + r->height)*0.25*scale1)*1.5;
//                  circle(frame, center, radius, Scalar(0,0,255), 3, 8, 0 );
//              }
//              else
//                 cout << "no face" <<endl;

//            if( cascade1.empty())
//                   continue;
//      }
//}
