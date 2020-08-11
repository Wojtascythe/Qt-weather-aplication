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

void on_actionZmiana_widoku_mapy_triggered();

void on_button_2_clicked();

void on_button_4_clicked();

void on_button_3_clicked();

void on_actionAktualizacja_Danych_triggered();

private:
    Ui::MainWindow *ui;
  szczyt *okno_szczytu;


};

#endif // MAINWINDOW_H
