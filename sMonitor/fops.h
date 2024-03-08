#ifndef FOPS_H
#define FOPS_H

#include <QWidget>

namespace Ui {
class fops;
}

class fops : public QWidget
{
    Q_OBJECT

public:
    explicit fops(QWidget *parent = 0);
    ~fops();

private slots:
    void on_back_menu_bt_clicked();

private:
    Ui::fops *ui;
};

#endif // FOPS_H
