/********************************************************************************
** Form generated from reading UI file 'fullShow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FULLSHOW_H
#define UI_FULLSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "click_lable.h"

QT_BEGIN_NAMESPACE

class Ui_fullShow
{
public:
    QWidget *centralwidget;
    click_lable *label;

    void setupUi(QMainWindow *fullShow)
    {
        if (fullShow->objectName().isEmpty())
            fullShow->setObjectName(QStringLiteral("fullShow"));
        fullShow->resize(1024, 600);
        fullShow->setMinimumSize(QSize(1024, 600));
        fullShow->setMaximumSize(QSize(1024, 600));
        centralwidget = new QWidget(fullShow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new click_lable(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1024, 600));
        label->setMinimumSize(QSize(1024, 600));
        label->setMaximumSize(QSize(1024, 600));
        fullShow->setCentralWidget(centralwidget);

        retranslateUi(fullShow);

        QMetaObject::connectSlotsByName(fullShow);
    } // setupUi

    void retranslateUi(QMainWindow *fullShow)
    {
        fullShow->setWindowTitle(QApplication::translate("fullShow", "MainWindow", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fullShow: public Ui_fullShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FULLSHOW_H
