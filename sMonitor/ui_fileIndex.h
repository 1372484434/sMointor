/********************************************************************************
** Form generated from reading UI file 'fileIndex.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEINDEX_H
#define UI_FILEINDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fileIndex
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QListWidget *picWidget;
    QListWidget *vidWidget;
    QPushButton *exit_bt;

    void setupUi(QMainWindow *fileIndex)
    {
        if (fileIndex->objectName().isEmpty())
            fileIndex->setObjectName(QStringLiteral("fileIndex"));
        fileIndex->resize(1024, 600);
        fileIndex->setMinimumSize(QSize(1024, 600));
        fileIndex->setMaximumSize(QSize(1024, 600));
        centralwidget = new QWidget(fileIndex);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1024, 600));
        tabWidget->setMinimumSize(QSize(1024, 600));
        tabWidget->setMaximumSize(QSize(1024, 600));
        tabWidget->setFocusPolicy(Qt::NoFocus);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(208, 201, 194);"));
        picWidget = new QListWidget(centralwidget);
        picWidget->setObjectName(QStringLiteral("picWidget"));
        picWidget->setGeometry(QRect(0, 0, 1024, 600));
        picWidget->setMinimumSize(QSize(1024, 600));
        vidWidget = new QListWidget(centralwidget);
        vidWidget->setObjectName(QStringLiteral("vidWidget"));
        vidWidget->setGeometry(QRect(0, 0, 1024, 600));
        vidWidget->setMinimumSize(QSize(1024, 600));
        vidWidget->setMaximumSize(QSize(1024, 600));
        exit_bt = new QPushButton(centralwidget);
        exit_bt->setObjectName(QStringLiteral("exit_bt"));
        exit_bt->setGeometry(QRect(970, 0, 50, 28));
        exit_bt->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/images/exit.png);"));
        fileIndex->setCentralWidget(centralwidget);

        retranslateUi(fileIndex);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(fileIndex);
    } // setupUi

    void retranslateUi(QMainWindow *fileIndex)
    {
        fileIndex->setWindowTitle(QApplication::translate("fileIndex", "MainWindow", 0));
        exit_bt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fileIndex: public Ui_fileIndex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEINDEX_H
