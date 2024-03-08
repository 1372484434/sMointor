#ifndef MYTHREAD
#define MYTHREAD
#include  <QThread>
#include <steng.h>
#include<QTime>

class myThread: public QThread  //jicheng
{
public:
    myThread();
    void run();  //QThread的虚函数
                 //线程处理函数
                 //不能直接调用，通过start()间接调用
    bool flag;   //添加一个 name 对象
    int v;
    setEng *sEng;
};

#endif // MYTHREAD

