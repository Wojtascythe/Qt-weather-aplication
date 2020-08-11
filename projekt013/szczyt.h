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

    explicit szczyt(QWidget *parent = 0);
    ~szczyt();
QString test;
private slots:


    void on_label_linkActivated(const QString &link);

    void on_pushButton_clicked();

private:
    Ui::szczyt *ui;

};

#endif // SZCZYT_H
