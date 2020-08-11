#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
#include <QIcon>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QMessageBox>
#include <QImage>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QIODevice>
#include <QUrl>
#include <QEventLoop>
QString tlo ="AB";
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap bck(":/zasoby/images/back.png");
    ui->label_bg_pure->setPixmap(bck);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
QFile baza_danych("C:/Users/wojta/Desktop/wizualizacja/projekt011/test.txt");
if(!baza_danych.open(QFile::WriteOnly | QFile::Text))
{
    QMessageBox::warning(this, "title", "file not open");
}
    QTextStream out(&baza_danych);
    QString text = ui->plainTextEdit->toPlainText();
    out<<text;
    baza_danych.flush();
    baza_danych.close();

}

void MainWindow::on_button_clicked()
{

    okno_szczytu = new szczyt(this);
    okno_szczytu->show();
okno_szczytu->setFixedSize(1201, 498);
}


void MainWindow::on_pushButton_2_clicked()
{
    QFile baza_danych("C:/Users/wojta/Desktop/wizualizacja/projekt011/test.txt");
    if(!baza_danych.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");
    }
        QTextStream in(&baza_danych);
        QString text = in.readAll();
        ui->plainTextEdit->setPlainText(text);

        baza_danych.close();

}

void MainWindow::on_pushButton_3_clicked()
{
    QNetworkAccessManager manager;
    QNetworkReply *response = manager.get(QNetworkRequest(QUrl("view-source:https://www.skiinfo.pl/valais/verbier/pogoda.html")));
    QEventLoop event;
    connect(response,SIGNAL(finished()),&event,SLOT(quit()));
    event.exec();
    QString html = QString::fromUtf8(response->readAll());
    QFile baza_danych("C:/Users/wojta/Desktop/wizualizacja/projekt011/test.txt");
        if(!baza_danych.open(QFile::WriteOnly | QFile::Text))
        {
            QMessageBox::warning(this, "title", "file not open");
        }



           QTextStream out(&baza_danych);

           out<<html;
           baza_danych.flush();
           baza_danych.close();

}

void MainWindow::on_actionZmiana_widoku_mapy_triggered()
{
    QPixmap bck(":/zasoby/images/back.png");
   QPixmap bck2(":/zasoby/images/topo.jpg");
   if(tlo == "AB"){
   ui-> label_bg_pure->setPixmap(bck2);
   tlo = "BA";
   }
   else{
       ui->label_bg_pure->setPixmap(bck);
       tlo="AB";
   }
}
