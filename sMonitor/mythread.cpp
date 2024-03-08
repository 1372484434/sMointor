#include "mythread.h"

#include <QDebug>

myThread::myThread()
{

}
//使用多线程的好处：提高应用程序响应速度、使CPU更加高效、改善程序结构。
//在Qt中使用QThread来管理线程。Qt中使用线程时，需要自己实现一个thread的类。
//mythread.h和mythread.cpp是自定义的线程类，需要改为继承自QThread，QThread类有一个虚函数run()，它就是线程处理函数，我们需要重写它。
//当我们调用QThread的start()函数时，会间接的调用run()函数。
void myThread::run()
{
    bool turn_left=true;
    bool turn_right=false;
    bool turn_down=true;
    bool turn_up=false;
    this->flag=true;

    while(1){
        if(this->flag==true){

        }else{
            break;
        }
        if(this->sEng->angLR>=125){
            turn_left=true;
            turn_right=false;
            QTime _Timer=QTime::currentTime().addMSecs(v+100);   //Qt实现非阻塞延时的方法,延时150毫秒  非阻塞延时：在延时的过程中，可以进行其他操作，保证界面不会卡住
            while(QTime::currentTime()<_Timer);


        }
        if(this->sEng->angLR<=25){
            turn_left=false;
            turn_right=true;
            QTime _Timer=QTime::currentTime().addMSecs(v+100);
            while(QTime::currentTime()<_Timer);


        }
        if(this->sEng->angUD>=90){
            turn_up=true;
            turn_down=false;
            QTime _Timer=QTime::currentTime().addMSecs(v+100);
            while(QTime::currentTime()<_Timer);

        }
        if(this->sEng->angUD<=40){
            turn_down=true;
            turn_up=false;
            QTime _Timer=QTime::currentTime().addMSecs(v+100);
            while(QTime::currentTime()<_Timer);

        }
        if(turn_down){
          this->sEng->turnDown();
          QTime _Timer=QTime::currentTime().addMSecs(v);
          while(QTime::currentTime()<_Timer);



        }
        if(turn_left){
            this->sEng->turnLeft();
            QTime _Timer=QTime::currentTime().addMSecs(v);
            while(QTime::currentTime()<_Timer);


        }
        if(turn_right){
            this->sEng->turnRight();
            QTime _Timer=QTime::currentTime().addMSecs(v);
            while(QTime::currentTime()<_Timer);




        }
        if(turn_up){
            this->sEng->turnUp();
            QTime _Timer=QTime::currentTime().addMSecs(v);
            while(QTime::currentTime()<_Timer);




        }
    }
}

