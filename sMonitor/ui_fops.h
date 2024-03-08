/********************************************************************************
** Form generated from reading UI file 'fops.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOPS_H
#define UI_FOPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fops
{
public:
    QLabel *label;
    QPushButton *back_menu_bt;

    void setupUi(QWidget *fops)
    {
        if (fops->objectName().isEmpty())
            fops->setObjectName(QStringLiteral("fops"));
        fops->resize(1024, 600);
        label = new QLabel(fops);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 80, 491, 111));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgb(7, 138, 247);"));
        label->setTextFormat(Qt::AutoText);
        back_menu_bt = new QPushButton(fops);
        back_menu_bt->setObjectName(QStringLiteral("back_menu_bt"));
        back_menu_bt->setGeometry(QRect(750, 430, 121, 71));

        retranslateUi(fops);

        QMetaObject::connectSlotsByName(fops);
    } // setupUi

    void retranslateUi(QWidget *fops)
    {
        fops->setWindowTitle(QApplication::translate("fops", "Form", 0));
        label->setText(QApplication::translate("fops", "               \350\277\231\346\230\257\346\226\207\344\273\266\347\256\241\347\220\206\347\225\214\351\235\242", 0));
        back_menu_bt->setText(QApplication::translate("fops", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class fops: public Ui_fops {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOPS_H
