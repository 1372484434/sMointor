#ifndef FILEINDEX
#define FILEINDEX



#include <QMainWindow>
#include <QListWidgetItem>
#include <QListWidget>
#include <QDir>
#include <QLabel>
#include "fullShow.h"
#include "click_lable.h"
#include <QMenu>
#include <QDebug>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/face.hpp>
using namespace std;
using namespace cv;

namespace Ui {
class fileIndex;
}

class fileIndex : public QMainWindow
{
    Q_OBJECT

public:
    explicit fileIndex(QWidget *parent = 0);
    ~fileIndex();
    void updatePicData(QString p_name);
    void updataVidData(QString vp_name,QString v_name);


signals:
    void give_message(QPixmap message);
    void give_vedname(QString ved_name);

private slots:
     void slot_itemClicked(QListWidgetItem * item);
     void on_picWidget_customContextMenuRequested(const QPoint &pos);
     void on_vidWidget_customContextMenuRequested(const QPoint &pos);
     void on_exit_bt_clicked();
     void pic_deleteSeedSlot( );
    void pic_xiugai();
    void vid_deleteSeedSlot( );
   void vid_xiugai();
private:
    Ui::fileIndex *ui;

    QString picPath,pvPath,vidPath;
    QStringList picList;      // 文件目录下所有的图像文件名
    QStringList vidList;      // 文件目录下所有的图像文件名
    fullShow *msg;
    QStringList filters;

    QFont font;
    QSize IMAGE_SIZE;
    QSize ITEM_SIZE;
    QListWidgetItem *picitem;
    QListWidgetItem *viditem;
};
#endif // FILEINDEX

