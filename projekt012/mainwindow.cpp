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
int kar_s =1;
int ziel_s=1;
int sz_s=1;
int kry_s =1;


int kar_sn =1;
int ziel_sn=1;
int sz_sn=1;
int kry_sn =1;


int kar_t =1;
int ziel_t=1;
int sz_t=1;
int kry_t =1;


int kar_n =1;
int ziel_n=1;
int sz_n=1;
int kry_n =1;

int kar_tn =1;
int ziel_tn=1;
int sz_tn=1;
int kry_tn =1;

int kar_w =1;
int ziel_w=1;
int sz_w=1;
int kry_w =1;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    QPixmap bck(":/zasoby/images/back.png");
    QPixmap n1(":/zasoby/images/n1.png");
    QPixmap n2(":/zasoby/images/n2.png");
    QPixmap n3(":/zasoby/images/n3.png");
    QPixmap n4(":/zasoby/images/n4.png");
    QPixmap n5(":/zasoby/images/n5.png");
    QPixmap sn1(":/zasoby/images/sn1.png");
    QPixmap sn2(":/zasoby/images/sn2.png");
    QPixmap sn3(":/zasoby/images/sn3.png");
    QPixmap s1(":/zasoby/images/s1.png");
    QPixmap s2(":/zasoby/images/s2.png");
    QPixmap s3(":/zasoby/images/s3.png");
    QPixmap s4(":/zasoby/images/s4.png");
    QPixmap s5(":/zasoby/images/s5.png");


    ui->label_bg_pure->setPixmap(bck);
//connect(ui->button, SIGNAL(clicked()), ui->label, SLOT(on_button_clicked()));

//////////////////WARUNKI KARPACZ
/// poziom śniegu
if(kar_sn==1)
{
    ui->karpacz_snieg->setPixmap(sn1);
}
if(kar_sn==2)
{
    ui->karpacz_snieg->setPixmap(sn2);
}
if(kar_sn==3)
{
    ui->karpacz_snieg->setPixmap(sn3);
}
//Zachmurzenie
if(kar_n==1)
{
    ui->karpacz_nieb->setPixmap(n1);
}
if(kar_n==2)
{
    ui->karpacz_nieb->setPixmap(n2);
}
if(kar_n==3)
{
    ui->karpacz_nieb->setPixmap(n3);
}
if(kar_n==4)
{
    ui->karpacz_nieb->setPixmap(n4);
}
if(kar_n==5)
{
    ui->karpacz_nieb->setPixmap(n5);
}
//Temperatura
ui->karpacz_temp->setText(QString::number(kar_t));
//Ogólny stan
if(kar_s==1)
{
    ui->karpacz_stan->setPixmap(s1);
}
if(kar_s==2)
{
    ui->karpacz_stan->setPixmap(s2);
}
if(kar_s==3)
{
    ui->karpacz_stan->setPixmap(s3);
}
if(kar_s==4)
{
    ui->karpacz_stan->setPixmap(s4);
}
if(kar_s==5)
{
    ui->karpacz_stan->setPixmap(s5);
}
////////Warunki Zieleniec
//śnieg
if(ziel_sn==1)
{
    ui->zieleniec_snieg->setPixmap(sn1);
}
if(ziel_sn==2)
{
    ui->zieleniec_snieg->setPixmap(sn2);
}
if(ziel_sn==3)
{
    ui->zieleniec_snieg->setPixmap(sn3);
}
//zachmurzenie
if(ziel_n==1)
{
    ui->zieleniec_nieb->setPixmap(n1);
}
if(ziel_n==2)
{
    ui->zieleniec_nieb->setPixmap(n2);
}
if(ziel_n==3)
{
    ui->zieleniec_nieb->setPixmap(n3);
}
if(ziel_n==4)
{
    ui->zieleniec_nieb->setPixmap(n4);
}
if(ziel_n==5)
{
    ui->zieleniec_nieb->setPixmap(n5);
}
//Temperatura
ui->zieleniec_temp->setText(QString::number(ziel_t));
//Ogólny stan
if(ziel_s==1)
{
    ui->zieleniec_stan->setPixmap(s1);
}
if(ziel_s==2)
{
    ui->zieleniec_stan->setPixmap(s2);
}
if(ziel_s==3)
{
    ui->zieleniec_stan->setPixmap(s3);
}
if(ziel_s==4)
{
    ui->zieleniec_stan->setPixmap(s4);
}
if(ziel_s==5)
{
    ui->zieleniec_stan->setPixmap(s5);
}
///////////Warunki Szczyrk
// śnieg
if(sz_sn==1)
{
ui->szczyrk_snieg->setPixmap(sn1);
}
if(sz_sn==2)
{
ui->szczyrk_snieg->setPixmap(sn2);
}
if(sz_sn==3)
{
ui->szczyrk_snieg->setPixmap(sn3);
}
//zachmurzenie
if(sz_n==1)
{
ui->szczyrk_nieb->setPixmap(n1);
}
if(sz_n==2)
{
ui->szczyrk_nieb->setPixmap(n2);
}
if(sz_n==3)
{
ui->szczyrk_nieb->setPixmap(n3);
}
if(sz_n==4)
{
ui->szczyrk_nieb->setPixmap(n4);
}
if(sz_n==5)
{
ui->szczyrk_nieb->setPixmap(n5);
}
//Temperatura
ui->szczyrk_temp->setText(QString::number(sz_t));
//Ogólny stan
if(sz_s==1)
{
    ui->szczyrk_stan->setPixmap(s1);
}
if(sz_s==2)
{
    ui->szczyrk_stan->setPixmap(s2);
}
if(sz_s==3)
{
    ui->szczyrk_stan->setPixmap(s3);
}
if(sz_s==4)
{
    ui->szczyrk_stan->setPixmap(s4);
}
if(sz_s==5)
{
    ui->szczyrk_stan->setPixmap(s5);
}

////////Warunki Krynica
//śnieg
if(kry_sn==1)
{
ui->krynica_snieg->setPixmap(sn1);
}
if(kry_sn==2)
{
ui->krynica_snieg->setPixmap(sn2);
}
if(kry_sn==3)
{
ui->krynica_snieg->setPixmap(sn3);
}
//zachmurzenie
if(kry_n==1)
{
ui->krynica_nieb->setPixmap(n1);
}
if(kry_n==2)
{
ui->krynica_nieb->setPixmap(n2);
}
if(kry_n==3)
{
ui->krynica_nieb->setPixmap(n3);
}
if(kry_n==4)
{
ui->krynica_nieb->setPixmap(n4);
}
if(kry_n==5)
{
ui->krynica_nieb->setPixmap(n5);
}
//Temperatura
ui->krynica_temp->setText(QString::number(kry_t));
//Ogólny stan

if(kry_s==1)
{
    ui->krynica_stan->setPixmap(s1);
}
if(kry_s==2)
{
    ui->krynica_stan->setPixmap(s2);
}
if(kry_s==3)
{
    ui->krynica_stan->setPixmap(s3);
}
if(kry_s==4)
{
    ui->krynica_stan->setPixmap(s4);
}
if(kry_s==5)
{
    ui->krynica_stan->setPixmap(s5);
}





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
QFile baza_danych("C:/Users/wojta/Desktop/wizualizacja/projekt012/test.txt");
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




void MainWindow::on_pushButton_2_clicked()
{
    QFile baza_danych("C:/Users/wojta/Desktop/wizualizacja/projekt012/test.txt");
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
    QFile baza_danych("C:/Users/wojta/Desktop/wizualizacja/projekt012/test.txt");
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
void MainWindow::on_button_clicked()
{

    okno_szczytu = new szczyt(this);
    okno_szczytu->show();
okno_szczytu->setFixedSize(1201, 498);
   //ui->label->setText("Szczyrk");
}
void MainWindow::on_button_2_clicked()
{
    okno_szczytu = new szczyt(this);
    okno_szczytu->show();
okno_szczytu->setFixedSize(1201, 498);
}

void MainWindow::on_button_4_clicked()
{
    okno_szczytu = new szczyt(this);
    okno_szczytu->show();
okno_szczytu->setFixedSize(1201, 498);
}

void MainWindow::on_button_3_clicked()
{
    okno_szczytu = new szczyt(this);
    okno_szczytu->show();
okno_szczytu->setFixedSize(1201, 498);
}

void MainWindow::on_actionAktualizacja_Danych_triggered()
{
    kar_s =3;
    ziel_s=3;
    sz_s=3;
    kry_s =3;


    kar_sn =3;
    ziel_sn=3;
   sz_sn=3;
    kry_sn =3;


    kar_t =3;
    ziel_t=3;
    sz_t=3;
    kry_t =3;


    kar_n =3;
    ziel_n=3;
    sz_n=3;
    kry_n =3;

    QPixmap bck(":/zasoby/images/back.png");
    QPixmap n1(":/zasoby/images/n1.png");
    QPixmap n2(":/zasoby/images/n2.png");
    QPixmap n3(":/zasoby/images/n3.png");
    QPixmap n4(":/zasoby/images/n4.png");
    QPixmap n5(":/zasoby/images/n5.png");
    QPixmap sn1(":/zasoby/images/sn1.png");
    QPixmap sn2(":/zasoby/images/sn2.png");
    QPixmap sn3(":/zasoby/images/sn3.png");
    QPixmap s1(":/zasoby/images/s1.png");
    QPixmap s2(":/zasoby/images/s2.png");
    QPixmap s3(":/zasoby/images/s3.png");
    QPixmap s4(":/zasoby/images/s4.png");
    QPixmap s5(":/zasoby/images/s5.png");
    //////////////////WARUNKI KARPACZ
    /// poziom śniegu
    if(kar_sn==1)
    {
        ui->karpacz_snieg->setPixmap(sn1);
    }
    if(kar_sn==2)
    {
        ui->karpacz_snieg->setPixmap(sn2);
    }
    if(kar_sn==3)
    {
        ui->karpacz_snieg->setPixmap(sn3);
    }
    //Zachmurzenie
    if(kar_n==1)
    {
        ui->karpacz_nieb->setPixmap(n1);
    }
    if(kar_n==2)
    {
        ui->karpacz_nieb->setPixmap(n2);
    }
    if(kar_n==3)
    {
        ui->karpacz_nieb->setPixmap(n3);
    }
    if(kar_n==4)
    {
        ui->karpacz_nieb->setPixmap(n4);
    }
    if(kar_n==5)
    {
        ui->karpacz_nieb->setPixmap(n5);
    }
    //Temperatura
    ui->karpacz_temp->setText(QString::number(kar_t));
    //Ogólny stan
    if(kar_s==1)
    {
        ui->karpacz_stan->setPixmap(s1);
    }
    if(kar_s==2)
    {
        ui->karpacz_stan->setPixmap(s2);
    }
    if(kar_s==3)
    {
        ui->karpacz_stan->setPixmap(s3);
    }
    if(kar_s==4)
    {
        ui->karpacz_stan->setPixmap(s4);
    }
    if(kar_s==5)
    {
        ui->karpacz_stan->setPixmap(s5);
    }
    ////////Warunki Zieleniec
    //śnieg
    if(ziel_sn==1)
    {
        ui->zieleniec_snieg->setPixmap(sn1);
    }
    if(ziel_sn==2)
    {
        ui->zieleniec_snieg->setPixmap(sn2);
    }
    if(ziel_sn==3)
    {
        ui->zieleniec_snieg->setPixmap(sn3);
    }
    //zachmurzenie
    if(ziel_n==1)
    {
        ui->zieleniec_nieb->setPixmap(n1);
    }
    if(ziel_n==2)
    {
        ui->zieleniec_nieb->setPixmap(n2);
    }
    if(ziel_n==3)
    {
        ui->zieleniec_nieb->setPixmap(n3);
    }
    if(ziel_n==4)
    {
        ui->zieleniec_nieb->setPixmap(n4);
    }
    if(ziel_n==5)
    {
        ui->zieleniec_nieb->setPixmap(n5);
    }
    //Temperatura
    ui->zieleniec_temp->setText(QString::number(ziel_t));
    //Ogólny stan
    if(ziel_s==1)
    {
        ui->zieleniec_stan->setPixmap(s1);
    }
    if(ziel_s==2)
    {
        ui->zieleniec_stan->setPixmap(s2);
    }
    if(ziel_s==3)
    {
        ui->zieleniec_stan->setPixmap(s3);
    }
    if(ziel_s==4)
    {
        ui->zieleniec_stan->setPixmap(s4);
    }
    if(ziel_s==5)
    {
        ui->zieleniec_stan->setPixmap(s5);
    }
    ///////////Warunki Szczyrk
    // śnieg
    if(sz_sn==1)
    {
    ui->szczyrk_snieg->setPixmap(sn1);
    }
    if(sz_sn==2)
    {
    ui->szczyrk_snieg->setPixmap(sn2);
    }
    if(sz_sn==3)
    {
    ui->szczyrk_snieg->setPixmap(sn3);
    }
    //zachmurzenie
    if(sz_n==1)
    {
    ui->szczyrk_nieb->setPixmap(n1);
    }
    if(sz_n==2)
    {
    ui->szczyrk_nieb->setPixmap(n2);
    }
    if(sz_n==3)
    {
    ui->szczyrk_nieb->setPixmap(n3);
    }
    if(sz_n==4)
    {
    ui->szczyrk_nieb->setPixmap(n4);
    }
    if(sz_n==5)
    {
    ui->szczyrk_nieb->setPixmap(n5);
    }
    //Temperatura
    ui->szczyrk_temp->setText(QString::number(sz_t));
    //Ogólny stan
    if(sz_s==1)
    {
        ui->szczyrk_stan->setPixmap(s1);
    }
    if(sz_s==2)
    {
        ui->szczyrk_stan->setPixmap(s2);
    }
    if(sz_s==3)
    {
        ui->szczyrk_stan->setPixmap(s3);
    }
    if(sz_s==4)
    {
        ui->szczyrk_stan->setPixmap(s4);
    }
    if(sz_s==5)
    {
        ui->szczyrk_stan->setPixmap(s5);
    }

    ////////Warunki Krynica
    //śnieg
    if(kry_sn==1)
    {
    ui->krynica_snieg->setPixmap(sn1);
    }
    if(kry_sn==2)
    {
    ui->krynica_snieg->setPixmap(sn2);
    }
    if(kry_sn==3)
    {
    ui->krynica_snieg->setPixmap(sn3);
    }
    //zachmurzenie
    if(kry_n==1)
    {
    ui->krynica_nieb->setPixmap(n1);
    }
    if(kry_n==2)
    {
    ui->krynica_nieb->setPixmap(n2);
    }
    if(kry_n==3)
    {
    ui->krynica_nieb->setPixmap(n3);
    }
    if(kry_n==4)
    {
    ui->krynica_nieb->setPixmap(n4);
    }
    if(kry_n==5)
    {
    ui->krynica_nieb->setPixmap(n5);
    }
    //Temperatura
    ui->krynica_temp->setText(QString::number(kry_t));
    //Ogólny stan

    if(kry_s==1)
    {
        ui->krynica_stan->setPixmap(s1);
    }
    if(kry_s==2)
    {
        ui->krynica_stan->setPixmap(s2);
    }
    if(kry_s==3)
    {
        ui->krynica_stan->setPixmap(s3);
    }
    if(kry_s==4)
    {
        ui->krynica_stan->setPixmap(s4);
    }
    if(kry_s==5)
    {
        ui->krynica_stan->setPixmap(s5);
    }




}
