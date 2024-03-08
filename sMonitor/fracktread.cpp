
#include "frackthread.h"

#include <QDebug>

frackthread::frackthread()
{

}
void frackthread::run()
{
    cascade1.load("./haarcascade_frontalface_alt.xml");
    nestedCascade1.load("./haarcascade_eye_tree_eyeglasses.xml");
    this->checkbox->setChecked(true);
    this->checkbox3->setChecked(true);
    this->checkbox5->setChecked(true);


    cap.open(0);

    sleep(1);
    while(1){
      CaptureOpen();
    }



}

void frackthread::CaptureOpen(){

    if(test1)
    {

    string str = "./video/";
    str += "01.avi";
    writer.open(str,CV_FOURCC('M', 'J', 'P', 'G') ,30.0, Size(640,480),true);

    //MJPG
    if(!(writer.isOpened()))
    {
    cout << "videowriter open fail"<<endl;
    }
    cout << "yes" <<endl;

    }
    test1 = 0;
    cap >>frame;
    face_tracking();
    eye_tracking();

    Mat frame1;
    cvtColor(frame,frame1,CV_BGR2RGB);//用于在图像中不同的色彩空间进行转换，用于后续处理 three parameter 输入序列 输出序列 颜色映射码

    QImage Qimage1 = QImage((const unsigned char *)(frame1.data),
                    frame1.cols, frame1.rows,
                    frame1.step,QImage::Format_RGB888);
    QImage mirroredImage = Qimage1.mirrored(true, false);
    this->grea->setPixmap(QPixmap::fromImage(mirroredImage));
        //ui->cap_Frame_lb->resize(Qimage1.size());
    this->grea->show();

    if(!VidFlag)
    {
    //次数可以调整视频的帧数
    *writer2 << frame;
    *writer2 << frame;
    *writer2 << frame;
    *writer2 << frame;
    }
}

void frackthread::face_tracking(void){
    int i = 0;
    double t = 0;
    vector<Rect> faces, faces2;
    const static Scalar colors[] = { CV_RGB(0,0,255),
                                     CV_RGB(0,128,255),
                                     CV_RGB(0,255,255),
                                     CV_RGB(0,255,0),
                                     CV_RGB(255,128,0),
                                     CV_RGB(255,255,0),
                                     CV_RGB(255,0,0),
                                     CV_RGB(255,0,255)} ;
    Mat gray1,smallImg(cvRound(frame.rows/scale1), cvRound(frame.cols/scale1), CV_8UC1 );
    cvtColor(frame, gray1, CV_BGR2GRAY );
    cv::resize(gray1, smallImg, Size(frame.cols / 3, frame.rows / 3));
    equalizeHist( smallImg, smallImg );

    t = (double)cvGetTickCount();

    cascade1.detectMultiScale( smallImg, faces,
                               1.6, 3, 0
                               |CV_HAAR_SCALE_IMAGE
                               ,Size(30, 30));
      t = (double)cvGetTickCount() - t;
      for( vector<Rect>::const_iterator r = faces.begin(); r != faces.end(); r++, i++ )
       {
         Mat smallImgROI;
          vector<Rect> nestedObjects;
          static Point center;
           int radius;
           double aspect_ratio = (double)r->width/r->height;
            if( 0.75 < aspect_ratio && aspect_ratio < 1.3 )
             {
                 center.x = cvRound((r->x + r->width*0.5)*scale1)*1.5;
                 center.y = cvRound((r->y + r->height*0.5)*scale1)*1.5;
                  radius = cvRound((r->width + r->height)*0.25*scale1)*1.5;
                  circle(frame, center, radius, Scalar(0,0,255), 3, 8, 0 );

                  double x_offset,y_offset;
                  double length;
                  if(center.x<frame.rows&& center.y<frame.cols){
                      x_offset=((((double)center.x)/(double)frame.rows)-0.65)*2;
                      y_offset=((((double)center.y)/(double)frame.cols)-0.4)*2;
                      length=72780/radius;
                      cout<<"length:"<<length<<endl;
                      cout<<"radius:"<<radius<<endl;
                      cout<<"x_offset:"<<x_offset<<" "<<"y_offset:"<<y_offset<<endl;
                      cout<<"frame.row:"<<frame.rows<<" "<<"frame.cols:"<<frame.cols<<endl;
                      cout<<"center.x"<<center.x<<" "<<"center.y:"<<center.y<<endl;
                  }

                      if((x_offset>0)&&(x_offset<=1)){
                          this->sEng->turnRight(x_offset);
                      }
                      if((x_offset<0)&&(x_offset>=-1)){
                          this->sEng->turnLeft(x_offset);
                      }

                      if((y_offset>0)&&(y_offset<=1)){
                          this->sEng->turnDown(y_offset);
                      }
                      if((y_offset<0)&&(y_offset>=-1)){
                          this->sEng->turnUp(y_offset);
                      }

                      if((length/100)<distance1&&(length/100)>distance2){

                          QDateTime curDateTime=QDateTime::currentDateTime();
                          string strr= "./photo/";
                          strr += curDateTime.toString("yyyy-MM-dd|hh:mm:ss").toStdString();
                          strr +=".jpg";
                          imwrite(strr,frame);
                          this->checkbox->setChecked(false);
                          this->checkbox2->setChecked(true);




                      }
                      if((length/100)<distance2){
                          this->checkbox3->setChecked(false);
                          this->checkbox4->setChecked(true);
                          writer << frame;
                          writer << frame;
                          writer << frame;
                          writer << frame;
                          writer << frame;
                          writer << frame;
                          writer << frame;
                          writer << frame;
                          writer << frame;


                      }

              }
              else
                 cout << "no face" <<endl;

            if( nestedCascade1.empty())
                   continue;
      }
}


void frackthread::eye_tracking(void){
    int i = 0;
    double t = 0;
    vector<Rect> faces, faces2;
    const static Scalar colors[] = { CV_RGB(0,0,255),
                                     CV_RGB(0,128,255),
                                     CV_RGB(0,255,255),
                                     CV_RGB(0,255,0),
                                     CV_RGB(255,128,0),
                                     CV_RGB(255,255,0),
                                     CV_RGB(255,0,0),
                                     CV_RGB(255,0,255)} ;
    Mat gray1,smallImg(cvRound(frame.rows/scale1), cvRound(frame.cols/scale1), CV_8UC1 );
    cvtColor(frame, gray1, CV_BGR2GRAY );
    cv::resize(gray1, smallImg, Size(frame.cols / 3, frame.rows / 3));
    equalizeHist( smallImg, smallImg );

    t = (double)cvGetTickCount();

    nestedCascade1.detectMultiScale( smallImg, faces,
                               1.6, 3, 0
                               |CV_HAAR_SCALE_IMAGE
                               ,Size(30, 30));
      t = (double)cvGetTickCount() - t;
      for( vector<Rect>::const_iterator r = faces.begin(); r != faces.end(); r++, i++ )
       {
         Mat smallImgROI;
          vector<Rect> nestedObjects;
          static Point center;
           int radius;
           double aspect_ratio = (double)r->width/r->height;
            if( 0.75 < aspect_ratio && aspect_ratio < 1.3 )
             {
                 center.x = cvRound((r->x + r->width*0.5)*scale1)*1.5;
                 center.y = cvRound((r->y + r->height*0.5)*scale1)*1.5;
                  radius = cvRound((r->width + r->height)*0.25*scale1)*1.5;
                  circle(frame, center, radius, Scalar(0,0,255), 3, 8, 0 );
              }
              else
                 cout << "no face" <<endl;

            if( cascade1.empty())
                   continue;
      }
}
