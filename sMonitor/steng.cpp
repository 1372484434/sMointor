#include "steng.h"
#include<QTime>

//初始化云台设备
setEng::setEng()
{
    angfd=open(dev,O_RDWR);
    if(angfd<0) qDebug()<<"open steng dev fail";
}


void setEng::whileall(int v){

}

//设置云台初始角度
void setEng::backLrpos()
{
    angLR=75;
    ioctl(angfd,angLR,TURN_LR_CTL);
}


void setEng::backUdpos()
{
    angUD=67;
    ioctl(angfd,angUD,TURN_UD_CTL);
}


//控制左右偏转角度
void setEng::turnLeft()
{
    angLR--;
    if(angLR<=25) angLR=25;
    ioctl(angfd,angLR,TURN_LR_CTL);
}

void setEng::turnRight()
{
    angLR++;
    if(angLR>=125) angLR=125;
    ioctl(angfd,angLR,TURN_LR_CTL);
}

void setEng::setLrAngle(int angle)
{
    angLR=angle+25;
    if(angLR<=25) angLR=25;
    if(angLR>=125) angLR=125;
    ioctl(angfd,angLR,TURN_LR_CTL);
}

int setEng::getLrAngle()
{
    return angLR-25;
}

//控制上下偏转角度
void setEng::turnUp()
{
    angUD--;
    if(angUD<=17) angUD=17;
    ioctl(angfd,angUD,TURN_UD_CTL);
}

void setEng::turnDown()
{

    angUD++;
    if(angUD>=117) angUD=117;
    ioctl(angfd,angUD,TURN_UD_CTL);
}

void setEng::setUdAngle(int angle)
{
    angUD=angle+17;
    if(angUD<=17) angUD=17;
    if(angUD>=117) angUD=117;
    ioctl(angfd,angUD,TURN_UD_CTL);

}

int setEng::getUdAngle()
{
    return angUD-17;
}

double setEng::turnLeft(double off_set3)
{
    angLR=angLR-(off_set3)*Kp;
    if(angLR<25) angLR=25;
    ioctl(angfd,angLR,TURN_LR_CTL);
    return angLR;
}

double setEng::turnRight(double off_set4)
{
    angLR=angLR-(off_set4)*Kp;
    if(angLR>125)  angLR=125;
    ioctl(angfd,angLR,TURN_LR_CTL);
    return angLR;
}

double setEng::turnDown(double off_set3){
    angUD =angUD + (off_set3)* Kp;
        if(angUD>=117) angUD=117;
        ioctl(angfd,angUD,TURN_UD_CTL);
        return angUD;
}

double setEng::turnUp(double off_set4){
    angUD=angUD + (off_set4) * Kp;
        if(angUD<=17) angUD=17;
        ioctl(angfd,angUD,TURN_UD_CTL);
        return angUD;
}



