#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
#include <QIcon>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QMessageBox>
#include <QImage>
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
QFile baza_danych("C:/Users/wojta/Desktop/wizualizacja/projekt005/test.txt");
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

}


void MainWindow::on_pushButton_2_clicked()
{
    QFile baza_danych("C:/Users/wojta/Desktop/wizualizacja/projekt005/test.txt");
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


    QUrl imageUrl("https://upload.wikimedia.org/wikipedia/commons/d/d8/Teddy_bear_early_1900s_-_Smithsonian_Museum_of_Natural_History.jpg");
   m_pImgCtrl  = new downloader(imageUrl, this);

    connect(m_pImgCtrl, SIGNAL (downloaded()), this, SLOT (loadImage()));
}
void MainWindow::loadImage()
{

    QPixmap ted;
    ted.loadFromData(m_pImgCtrl->downloadedData());
}
