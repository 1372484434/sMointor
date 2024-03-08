#ifndef FULL_FILE_H
#define FULL_FILE_H

#include <QMainWindow>
#include <QDebug>
#include <QProcess>
//#define X86
namespace Ui {
class fullShow;
}

class fullShow : public QMainWindow
{
    Q_OBJECT

public:
    explicit fullShow(QWidget *parent = 0);
    ~fullShow();

    bool play_video(QString ved_name);

private slots:
    void show_picture(QPixmap pic_name);
    void show_video(QString vid_name);
    void on_label_doubleclicked();

private:
    Ui::fullShow *ui;



    QProcess *process;

};

#endif // FULL_FILE_H
