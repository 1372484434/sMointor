#include "fullShow.h"
#include "ui_fullShow.h"

fullShow::fullShow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fullShow)
{
    ui->setupUi(this);
    process=new QProcess(this);
    connect(ui->label,SIGNAL(itemDoubleClicked()),this,SLOT(on_label_doubleclicked()));

}

fullShow::~fullShow()
{
    delete ui;
}


//全屏显示图片
void fullShow::show_picture(QPixmap pic_name)
{
    ui->label->setPixmap(pic_name);
    ui->label->showMaximized();
}

//全屏播放视频
void fullShow::show_video(QString vid_name)
{
    play_video(vid_name);
}

bool fullShow::play_video(QString vid_name)
{
#ifdef X86 //在 x86 平台
 QStringList args;
 args << "-slave"; //使用 slave 模式
 args << "-quiet"; //不要输出冗余信息
 args << "-speed"<<QString::number(0.4);
 args << "-wid" << QString::number(ui->label->winId());
 args << "-zoom"; //自适应窗口
 args << "-vo";
 args << "x11"; //使用 x11 模式播放
 args << vid_name; //播放 file_name 文件
 process->start("mplayer", args); //启动该进程，并传入参数 args
#else//arm 平台
 QString cmd="mplayer -slave -quiet -geometry 0:0 ";
 cmd.append(QString("-zoom -x 1024 -y 600 "));
 cmd.append(vid_name);
 process->start(cmd);
#endif
 return true;

}


//退出全屏显示
void fullShow::on_label_doubleclicked()
{
    this->parentWidget()->show();
   delete this;




}



