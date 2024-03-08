#include "fops.h"
#include "ui_fops.h"

fops::fops(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fops)
{
    ui->setupUi(this);
}

fops::~fops()
{
    delete ui;
}

void fops::on_back_menu_bt_clicked()
{
    this->close();
}
