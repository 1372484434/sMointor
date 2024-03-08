#ifndef STENG
#define STENG
#include <QObject>
#include <QTimer>
#include <QDebug>

#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/time.h>

#define dev "/dev/sm_stENG"
#define TURN_LR_CTL 0x2
#define TURN_UD_CTL 0x3

#define Kp 2.0

class setEng : public QObject
{
    Q_OBJECT
public:
    setEng();
    void turnLeft();
    void turnRight();
    void setLrAngle(int ang);
    int getLrAngle();

    void turnUp();
    void turnDown();
    void setUdAngle(int ang);
    int getUdAngle();

    void backLrpos();
    void backUdpos();
    void whileall(int v);
    double turnLeft(double off_set3);
    double turnRight(double off_set4);
    double turnDown(double off_set3);
    double turnUp(double off_set4);




public slots:

public:
    int angLR;
    int angUD;
    int angfd;



};

#endif // STENG

