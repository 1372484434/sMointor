#ifndef SMENU
#define SMENU

#include <QMainWindow>
#include <QDebug>
#include "fileIndex.h"

namespace Ui {
class fMenu;
}

class fMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit fMenu(QWidget *parent = 0);
    ~fMenu();

private slots:
    void on_fileManage_bt_clicked();

private:
    Ui::fMenu *ui;

    fileIndex *fIndex;
};
#endif // SMENU

