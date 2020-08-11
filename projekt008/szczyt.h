#ifndef SZCZYT_H
#define SZCZYT_H

#include <QMainWindow>

namespace Ui {
class szczyt;
}

class szczyt : public QMainWindow
{
    Q_OBJECT

public:
void closeEvent(QCloseEvent *event);
    explicit szczyt(QWidget *parent = 0);
    ~szczyt();

private slots:
    void on_pushButton_clicked();

private:
    Ui::szczyt *ui;

};

#endif // SZCZYT_H
