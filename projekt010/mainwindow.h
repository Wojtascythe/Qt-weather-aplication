#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "szczyt.h"
#include "downloader.h"
#include <QMainWindow>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();




private slots:
    void on_pushButton_clicked();

    void on_button_clicked();

    void on_pushButton_2_clicked();

void on_pushButton_3_clicked();

void on_actionPrze_cz_widok_mapy_triggered();



private:
    Ui::MainWindow *ui;
  szczyt *okno_szczytu;


};

#endif // MAINWINDOW_H
