#ifndef CLICK_LABLE_H
#define CLICK_LABLE_H


#include <QLabel>
class click_lable : public QLabel
{
    Q_OBJECT
public:

    explicit click_lable(QWidget *parent=0, Qt::WindowFlags f=0);
    explicit click_lable(const QString &text, QWidget *parent=0, Qt::WindowFlags f=0);

protected:
    /*!
      由Qt自己调用的鼠标事件处理函数,在此发射clicked信号
    */
    virtual void mouseReleaseEvent(QMouseEvent * ev);
      void mouseDoubleClickEvent(QMouseEvent *event);

signals:

    void clicked(void);
    void doubleclicked(void);

};
#endif // CLICK_LABLE_H

