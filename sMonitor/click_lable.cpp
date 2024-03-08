#include "click_lable.h"

click_lable::click_lable(QWidget *parent, Qt::WindowFlags f):

    QLabel(parent,f)
{}

click_lable::click_lable(const QString &text, QWidget *parent, Qt::WindowFlags f):

    QLabel(text,parent,f)
{}

void click_lable::mouseReleaseEvent(QMouseEvent * ev)
{

    Q_UNUSED(ev)
    emit clicked();

}

void click_lable::mouseDoubleClickEvent(QMouseEvent *event){
    Q_UNUSED(event)
    emit doubleclicked();
}
