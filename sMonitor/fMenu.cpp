
#include "fMenu.h"
#include "ui_fMenu.h"

fMenu::fMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fMenu)
{
    ui->setupUi(this);

    //设置界面显示样式
    setStyleSheet("background:skyblue;");
    ui->fileManage_bt->setFocusPolicy(Qt::NoFocus);
}

fMenu::~fMenu()
{
    delete ui;
}

//打开文件管理界面
void fMenu::on_fileManage_bt_clicked()
{
    fIndex = new fileIndex(this);
     fIndex->updatePicData("./photo");
     fIndex->updataVidData("./photo","./video");
     fIndex->show();
     this->hide();
}



