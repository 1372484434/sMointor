/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QLabel *capArea_lb;
    QStackedWidget *ctl_Panel_sw;
    QWidget *page;
    QPushButton *turn_up_bt;
    QPushButton *turn_left_bt;
    QPushButton *turn_right_bt;
    QPushButton *turn_reset_bt;
    QPushButton *turn_down_bt_;
    QPushButton *get_photo_bt;
    QPushButton *get_video_bt;
    QWidget *page_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QToolButton *swt_Control_bt;
    QToolButton *exp_Check_bt;
    QToolButton *file_Manage_bt;
    QToolButton *mode_Setup_bt;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_4;
    QButtonGroup *buttonGroup_2;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(1024, 600);
        capArea_lb = new QLabel(menu);
        capArea_lb->setObjectName(QStringLiteral("capArea_lb"));
        capArea_lb->setGeometry(QRect(40, 60, 581, 351));
        capArea_lb->setStyleSheet(QStringLiteral("background-color: rgb(19, 9, 9);"));
        ctl_Panel_sw = new QStackedWidget(menu);
        ctl_Panel_sw->setObjectName(QStringLiteral("ctl_Panel_sw"));
        ctl_Panel_sw->setGeometry(QRect(660, 50, 291, 361));
        ctl_Panel_sw->setStyleSheet(QLatin1String("background-color: rgb(27, 176, 244);\n"
""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        turn_up_bt = new QPushButton(page);
        turn_up_bt->setObjectName(QStringLiteral("turn_up_bt"));
        turn_up_bt->setGeometry(QRect(100, 40, 51, 51));
        turn_up_bt->setStyleSheet(QStringLiteral("background-color: rgb(242, 241, 240);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/up.png"), QSize(), QIcon::Normal, QIcon::On);
        turn_up_bt->setIcon(icon);
        turn_up_bt->setIconSize(QSize(70, 70));
        turn_up_bt->setAutoRepeat(true);
        turn_up_bt->setAutoRepeatDelay(30);
        turn_up_bt->setAutoRepeatInterval(30);
        turn_left_bt = new QPushButton(page);
        turn_left_bt->setObjectName(QStringLiteral("turn_left_bt"));
        turn_left_bt->setGeometry(QRect(40, 100, 51, 51));
        turn_left_bt->setStyleSheet(QStringLiteral("background-color: rgb(242, 241, 240);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/l.png"), QSize(), QIcon::Normal, QIcon::On);
        turn_left_bt->setIcon(icon1);
        turn_left_bt->setIconSize(QSize(70, 70));
        turn_left_bt->setAutoRepeat(true);
        turn_left_bt->setAutoRepeatDelay(30);
        turn_left_bt->setAutoRepeatInterval(30);
        turn_right_bt = new QPushButton(page);
        turn_right_bt->setObjectName(QStringLiteral("turn_right_bt"));
        turn_right_bt->setGeometry(QRect(160, 100, 51, 51));
        turn_right_bt->setStyleSheet(QStringLiteral("background-color: rgb(242, 241, 240);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/r.png"), QSize(), QIcon::Normal, QIcon::On);
        turn_right_bt->setIcon(icon2);
        turn_right_bt->setIconSize(QSize(70, 70));
        turn_right_bt->setAutoRepeat(true);
        turn_right_bt->setAutoRepeatDelay(30);
        turn_right_bt->setAutoRepeatInterval(30);
        turn_reset_bt = new QPushButton(page);
        turn_reset_bt->setObjectName(QStringLiteral("turn_reset_bt"));
        turn_reset_bt->setGeometry(QRect(100, 100, 51, 51));
        turn_reset_bt->setStyleSheet(QStringLiteral("background-color: rgb(242, 241, 240);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/n.png"), QSize(), QIcon::Normal, QIcon::On);
        turn_reset_bt->setIcon(icon3);
        turn_reset_bt->setIconSize(QSize(70, 70));
        turn_down_bt_ = new QPushButton(page);
        turn_down_bt_->setObjectName(QStringLiteral("turn_down_bt_"));
        turn_down_bt_->setGeometry(QRect(100, 160, 51, 51));
        turn_down_bt_->setStyleSheet(QStringLiteral("background-color: rgb(242, 241, 240);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/d.png"), QSize(), QIcon::Normal, QIcon::On);
        turn_down_bt_->setIcon(icon4);
        turn_down_bt_->setIconSize(QSize(70, 70));
        turn_down_bt_->setAutoRepeat(true);
        turn_down_bt_->setAutoRepeatDelay(30);
        turn_down_bt_->setAutoRepeatInterval(30);
        get_photo_bt = new QPushButton(page);
        get_photo_bt->setObjectName(QStringLiteral("get_photo_bt"));
        get_photo_bt->setGeometry(QRect(50, 220, 61, 41));
        get_photo_bt->setStyleSheet(QStringLiteral("background-color: rgb(242, 241, 240);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/P.png"), QSize(), QIcon::Normal, QIcon::On);
        get_photo_bt->setIcon(icon5);
        get_photo_bt->setIconSize(QSize(59, 106));
        get_video_bt = new QPushButton(page);
        get_video_bt->setObjectName(QStringLiteral("get_video_bt"));
        get_video_bt->setGeometry(QRect(150, 220, 61, 41));
        get_video_bt->setStyleSheet(QStringLiteral("background-color: rgb(242, 241, 240);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/V.png"), QSize(), QIcon::Normal, QIcon::On);
        get_video_bt->setIcon(icon6);
        get_video_bt->setIconSize(QSize(60, 111));
        ctl_Panel_sw->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 271, 191));
        groupBox->setStyleSheet(QLatin1String(" QGroupBox {\n"
"            border-color: rgb(0, 0, 255);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"            margin-top: 0.5ex;\n"
"        }\n"
"        QGroupBox::title {\n"
"            subcontrol-origin: margin;\n"
"            subcontrol-position: top left;\n"
"            left: 10px;\n"
"            margin-left: 2px;\n"
"            padding: 0  0px;\n"
"        }"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 251, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        checkBox = new QCheckBox(layoutWidget);
        buttonGroup = new QButtonGroup(menu);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(checkBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(layoutWidget);
        buttonGroup->addButton(checkBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        checkBox_3 = new QCheckBox(layoutWidget);
        buttonGroup_2 = new QButtonGroup(menu);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(checkBox_3);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout_2->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(layoutWidget);
        buttonGroup_2->addButton(checkBox_4);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        horizontalLayout_2->addWidget(checkBox_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        checkBox_5 = new QCheckBox(layoutWidget);
        buttonGroup_3 = new QButtonGroup(menu);
        buttonGroup_3->setObjectName(QStringLiteral("buttonGroup_3"));
        buttonGroup_3->addButton(checkBox_5);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        horizontalLayout_3->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(layoutWidget);
        buttonGroup_3->addButton(checkBox_6);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        horizontalLayout_3->addWidget(checkBox_6);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 230, 271, 101));
        groupBox_2->setStyleSheet(QLatin1String(" QGroupBox {\n"
"            border-color: rgb(0, 0, 256);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"            margin-top: 0.5ex;\n"
"        }\n"
"        QGroupBox::title {\n"
"            subcontrol-origin: margin;\n"
"            subcontrol-position: top left;\n"
"            left: 10px;\n"
"            margin-left: 2px;\n"
"            padding: 0  0px;\n"
"        }"));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 30, 251, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        checkBox_7 = new QCheckBox(layoutWidget_2);
        buttonGroup_4 = new QButtonGroup(menu);
        buttonGroup_4->setObjectName(QStringLiteral("buttonGroup_4"));
        buttonGroup_4->addButton(checkBox_7);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        horizontalLayout_4->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(layoutWidget_2);
        buttonGroup_4->addButton(checkBox_8);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));

        horizontalLayout_4->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(layoutWidget_2);
        buttonGroup_4->addButton(checkBox_9);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));

        horizontalLayout_4->addWidget(checkBox_9);

        ctl_Panel_sw->addWidget(page_2);
        swt_Control_bt = new QToolButton(menu);
        swt_Control_bt->setObjectName(QStringLiteral("swt_Control_bt"));
        swt_Control_bt->setGeometry(QRect(60, 470, 151, 91));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/amt.jpg"), QSize(), QIcon::Normal, QIcon::On);
        swt_Control_bt->setIcon(icon7);
        swt_Control_bt->setIconSize(QSize(40, 40));
        exp_Check_bt = new QToolButton(menu);
        exp_Check_bt->setObjectName(QStringLiteral("exp_Check_bt"));
        exp_Check_bt->setGeometry(QRect(280, 470, 171, 91));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/3.png"), QSize(), QIcon::Normal, QIcon::On);
        exp_Check_bt->setIcon(icon8);
        exp_Check_bt->setIconSize(QSize(40, 40));
        file_Manage_bt = new QToolButton(menu);
        file_Manage_bt->setObjectName(QStringLiteral("file_Manage_bt"));
        file_Manage_bt->setGeometry(QRect(500, 470, 171, 91));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/4.jpg"), QSize(), QIcon::Normal, QIcon::On);
        file_Manage_bt->setIcon(icon9);
        file_Manage_bt->setIconSize(QSize(40, 40));
        mode_Setup_bt = new QToolButton(menu);
        mode_Setup_bt->setObjectName(QStringLiteral("mode_Setup_bt"));
        mode_Setup_bt->setGeometry(QRect(720, 470, 181, 91));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/5.jpg"), QSize(), QIcon::Normal, QIcon::On);
        mode_Setup_bt->setIcon(icon10);
        mode_Setup_bt->setIconSize(QSize(40, 40));
        ctl_Panel_sw->raise();
        capArea_lb->raise();
        swt_Control_bt->raise();
        exp_Check_bt->raise();
        file_Manage_bt->raise();
        mode_Setup_bt->raise();

        retranslateUi(menu);

        ctl_Panel_sw->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "menu", 0));
        capArea_lb->setText(QString());
        turn_up_bt->setText(QString());
        turn_left_bt->setText(QString());
        turn_right_bt->setText(QString());
        turn_reset_bt->setText(QString());
        turn_down_bt_->setText(QString());
        get_photo_bt->setText(QString());
        get_video_bt->setText(QString());
        groupBox->setTitle(QApplication::translate("menu", "\345\275\223\345\211\215\347\212\266\346\200\201", 0));
        label->setText(QApplication::translate("menu", "A\345\214\272", 0));
        checkBox->setText(QApplication::translate("menu", "\346\255\243\345\270\270", 0));
        checkBox_2->setText(QApplication::translate("menu", "\345\274\202\345\270\270", 0));
        label_2->setText(QApplication::translate("menu", "B\345\214\272", 0));
        checkBox_3->setText(QApplication::translate("menu", "\346\255\243\345\270\270", 0));
        checkBox_4->setText(QApplication::translate("menu", "\345\274\202\345\270\270", 0));
        label_3->setText(QApplication::translate("menu", "C\345\214\272", 0));
        checkBox_5->setText(QApplication::translate("menu", "\346\255\243\345\270\270", 0));
        checkBox_6->setText(QApplication::translate("menu", "\345\274\202\345\270\270", 0));
        groupBox_2->setTitle(QApplication::translate("menu", "\345\275\223\345\211\215\345\270\203\351\230\262", 0));
        checkBox_7->setText(QApplication::translate("menu", "A\345\214\272", 0));
        checkBox_8->setText(QApplication::translate("menu", "B\345\214\272", 0));
        checkBox_9->setText(QApplication::translate("menu", "C\345\214\272", 0));
        swt_Control_bt->setText(QApplication::translate("menu", "\345\210\207\346\215\242\350\207\252\345\212\250", 0));
        swt_Control_bt->setShortcut(QString());
        exp_Check_bt->setText(QApplication::translate("menu", "\345\274\202\345\270\270\346\237\245\347\234\213", 0));
        file_Manage_bt->setText(QApplication::translate("menu", "\346\226\207\344\273\266\347\256\241\347\220\206", 0));
        mode_Setup_bt->setText(QApplication::translate("menu", "\346\250\241\345\274\217\350\256\276\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
