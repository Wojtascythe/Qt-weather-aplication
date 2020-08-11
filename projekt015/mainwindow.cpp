#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "szczyt.h"
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
#include <QRegExp>
QString tlo ="AB";
QString foo1="Szczyrk";
QString foo2="Zieleniec";
QString foo3="Krynica";
QString foo4="Karpacz";
QString str_nkar, str_tkar, str_t2kar, str_okar, str_o2kar, str_ckar, str_wkar, str_w2kar;
QString str_nziel, str_tziel, str_t2ziel, str_oziel, str_o2ziel, str_cziel, str_wziel, str_w2ziel;
QString str_nsz, str_tsz, str_t2sz, str_osz, str_o2sz, str_csz, str_wsz, str_w2sz;
QString str_nkr, str_tkr, str_t2kr, str_okr, str_o2kr, str_ckr, str_wkr, str_w2kr;

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

int kar_c =1;
int ziel_c=1;
int sz_c=1;
int kry_c =1;

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
//connect(ui->button, SIGNAL(clicked()), ui->labelX, SLOT(on_button_clicked()));

//////////////////WARUNKI KARPACZ
/// poziom śniegu
if(kar_sn==1)ui->karpacz_snieg->setPixmap(sn1);

if(kar_sn==2)ui->karpacz_snieg->setPixmap(sn2);
if(kar_sn==3)ui->karpacz_snieg->setPixmap(sn3);
//Zachmurzenie
if(kar_n==1)ui->karpacz_nieb->setPixmap(n1);
if(kar_n==2) ui->karpacz_nieb->setPixmap(n2);
if(kar_n==3)ui->karpacz_nieb->setPixmap(n3);
if(kar_n==4) ui->karpacz_nieb->setPixmap(n4);
if(kar_n==5) ui->karpacz_nieb->setPixmap(n5);
//Temperatura
ui->karpacz_temp->setText(QString::number(kar_t));
//Ogólny stan
if(kar_s==1)ui->karpacz_stan->setPixmap(s1);
if(kar_s==2)ui->karpacz_stan->setPixmap(s2);
if(kar_s==3) ui->karpacz_stan->setPixmap(s3);
if(kar_s==4)ui->karpacz_stan->setPixmap(s4);
if(kar_s==5)ui->karpacz_stan->setPixmap(s5);
////////Warunki Zieleniec
//śnieg
if(ziel_sn==1)ui->zieleniec_snieg->setPixmap(sn1);
if(ziel_sn==2)ui->zieleniec_snieg->setPixmap(sn2);
if(ziel_sn==3)ui->zieleniec_snieg->setPixmap(sn3);
//zachmurzenie
if(ziel_n==1)ui->zieleniec_nieb->setPixmap(n1);
if(ziel_n==2) ui->zieleniec_nieb->setPixmap(n2);
if(ziel_n==3)ui->zieleniec_nieb->setPixmap(n3);
if(ziel_n==4) ui->zieleniec_nieb->setPixmap(n4);
if(ziel_n==5)ui->zieleniec_nieb->setPixmap(n5);
//Temperatura
ui->zieleniec_temp->setText(QString::number(ziel_t));
//Ogólny stan
if(ziel_s==1)ui->zieleniec_stan->setPixmap(s1);
if(ziel_s==2) ui->zieleniec_stan->setPixmap(s2);
if(ziel_s==3)ui->zieleniec_stan->setPixmap(s3);
if(ziel_s==4)ui->zieleniec_stan->setPixmap(s4);
if(ziel_s==5)ui->zieleniec_stan->setPixmap(s5);
///////////Warunki Szczyrk
// śnieg
if(sz_sn==1)ui->szczyrk_snieg->setPixmap(sn1);
if(sz_sn==2)ui->szczyrk_snieg->setPixmap(sn2);
if(sz_sn==3)ui->szczyrk_snieg->setPixmap(sn3);
//zachmurzenie
if(sz_n==1)ui->szczyrk_nieb->setPixmap(n1);
if(sz_n==2)ui->szczyrk_nieb->setPixmap(n2);
if(sz_n==3)ui->szczyrk_nieb->setPixmap(n3);
if(sz_n==4)ui->szczyrk_nieb->setPixmap(n4);
if(sz_n==5)ui->szczyrk_nieb->setPixmap(n5);
//Temperatura
ui->szczyrk_temp->setText(QString::number(sz_t));
//Ogólny stan
if(sz_s==1)ui->szczyrk_stan->setPixmap(s1);
if(sz_s==2) ui->szczyrk_stan->setPixmap(s2);
if(sz_s==3)ui->szczyrk_stan->setPixmap(s3);
if(sz_s==4)ui->szczyrk_stan->setPixmap(s4);
if(sz_s==5) ui->szczyrk_stan->setPixmap(s5);
////////Warunki Krynica
//śnieg
if(kry_sn==1)ui->krynica_snieg->setPixmap(sn1);
if(kry_sn==2)ui->krynica_snieg->setPixmap(sn2);
if(kry_sn==3)ui->krynica_snieg->setPixmap(sn3);
//zachmurzenie
if(kry_n==1)ui->krynica_nieb->setPixmap(n1);
if(kry_n==2)ui->krynica_nieb->setPixmap(n2);
if(kry_n==3)ui->krynica_nieb->setPixmap(n3);
if(kry_n==4)ui->krynica_nieb->setPixmap(n4);
if(kry_n==5)ui->krynica_nieb->setPixmap(n5);
//Temperatura
ui->krynica_temp->setText(QString::number(kry_t));
//Ogólny stan
if(kry_s==1)ui->krynica_stan->setPixmap(s1);
if(kry_s==2)ui->krynica_stan->setPixmap(s2);
if(kry_s==3)ui->krynica_stan->setPixmap(s3);
if(kry_s==4)ui->krynica_stan->setPixmap(s4);
if(kry_s==5)ui->krynica_stan->setPixmap(s5);



//connect(ui->button, SIGNAL(clicked()), this, SLOT(on_button_clicked()));




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{


}




void MainWindow::on_pushButton_2_clicked()
{


}

void MainWindow::on_pushButton_3_clicked()
{


}
int MainWindow::algorytm(int n, int t, int o, int w)
{
    int s;
    int suma=0;
if(n==5) suma+=5;
if(n==1) suma+=3;
if(n==2) suma+=2;
if(n==3) suma+=1;
if(n==4) suma-=3;

if(t<=-30) suma-=5;
if(t>-30&&t<-20)suma-=3;
if(t>=-20&&t<-15)suma+=2;
if(t>=-15&&t<-10)suma+=3;
if(t>=-10&&t<0)suma+=4;
if(t>=0&&t<5)suma+=1;
if(t>10)suma-=5;

if(o>=0&&o<=15) suma-=1;
if(o>15&&o<=30) suma+=2;
if(o>30) suma+=5;

if(w>0&&w<=5) suma+=2;
if(w>5&&w<=10) suma+=1;

    if(suma>=-11&&suma<-3)s=1;
    if(suma>=-3&&suma<2)s=2;
    if(suma>=2&&suma<7)s=3;
    if(suma>=7&&suma<12)s=4;
    if(suma>=12&&suma<16)s=5;
    return s;

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
{//szczyrk
 szczyt   *okno_szczytu = new szczyt(this);
 QPixmap nw1(":/zasoby/images/nw1.png");
 QPixmap nw2(":/zasoby/images/nw2.png");
 QPixmap nw3(":/zasoby/images/nw3.png");
 QPixmap nw4(":/zasoby/images/nw4.png");
 QPixmap nw5(":/zasoby/images/nw5.png");
 QPixmap sw1(":/zasoby/images/sw1.png");
 QPixmap sw2(":/zasoby/images/sw2.png");
 QPixmap sw3(":/zasoby/images/sw3.png");
 QPixmap sw4(":/zasoby/images/sw4.png");
 QPixmap sw5(":/zasoby/images/sw5.png");
 okno_szczytu->show();
 okno_szczytu->setFixedSize(1201, 498);
okno_szczytu->setTextToLabelX(foo1);
okno_szczytu->setTextToTemperatura(str_tsz);
okno_szczytu->setTextToCisnienie(str_csz);
okno_szczytu->setTextToOpady(str_osz);
okno_szczytu->setTextToWiatr(str_wsz);
if(str_nsz=="1.png")okno_szczytu->setPixmapNiebo(nw1), sz_n=1;
if(str_nsz=="2.png")okno_szczytu->setPixmapNiebo(nw2), sz_n=2;
if(str_nsz=="3.png") okno_szczytu->setPixmapNiebo(nw2), sz_n=2;
if(str_nsz=="4.png")okno_szczytu->setPixmapNiebo(nw3), sz_n=3;
if(str_nsz=="5.png")okno_szczytu->setPixmapNiebo(nw4), sz_n=4;
if(str_nsz=="9.png")okno_szczytu->setPixmapNiebo(nw4), sz_n=4;
if(str_nsz=="10.png")  okno_szczytu->setPixmapNiebo(nw4), sz_n=4;
if(str_nsz=="6.png")okno_szczytu->setPixmapNiebo(nw5), sz_n=5;

if(sz_s==5)okno_szczytu->setPixmapStan(sw5);
if(sz_s==4)okno_szczytu->setPixmapStan(sw4);
if(sz_s==3)okno_szczytu->setPixmapStan(sw3);
if(sz_s==2)okno_szczytu->setPixmapStan(sw2);
if(sz_s==1)okno_szczytu->setPixmapStan(sw1);
}
void MainWindow::on_button_2_clicked()
{//zieleniec
 szczyt   *okno_szczytu = new szczyt(this);
 QPixmap nw1(":/zasoby/images/nw1.png");
 QPixmap nw2(":/zasoby/images/nw2.png");
 QPixmap nw3(":/zasoby/images/nw3.png");
 QPixmap nw4(":/zasoby/images/nw4.png");
 QPixmap nw5(":/zasoby/images/nw5.png");
 QPixmap sw1(":/zasoby/images/sw1.png");
 QPixmap sw2(":/zasoby/images/sw2.png");
 QPixmap sw3(":/zasoby/images/sw3.png");
 QPixmap sw4(":/zasoby/images/sw4.png");
 QPixmap sw5(":/zasoby/images/sw5.png");
 okno_szczytu->show();
 okno_szczytu->setFixedSize(1201, 498);
 okno_szczytu->setTextToLabelX(foo2);
 okno_szczytu->setTextToTemperatura(str_tziel);
 okno_szczytu->setTextToCisnienie(str_cziel);
 okno_szczytu->setTextToOpady(str_oziel);
 okno_szczytu->setTextToWiatr(str_wziel);
 if(str_nziel=="1.png")okno_szczytu->setPixmapNiebo(nw1);
 if(str_nziel=="2.png")okno_szczytu->setPixmapNiebo(nw2);
 if(str_nziel=="3.png") okno_szczytu->setPixmapNiebo(nw2);
 if(str_nziel=="4.png")okno_szczytu->setPixmapNiebo(nw3);
 if(str_nziel=="5.png")okno_szczytu->setPixmapNiebo(nw4);
 if(str_nziel=="9.png")okno_szczytu->setPixmapNiebo(nw4);
 if(str_nziel=="10.png")  okno_szczytu->setPixmapNiebo(nw4);
 if(str_nziel=="6.png")okno_szczytu->setPixmapNiebo(nw5);

 if(ziel_s==5)okno_szczytu->setPixmapStan(sw5);
 if(ziel_s==4)okno_szczytu->setPixmapStan(sw4);
 if(ziel_s==3)okno_szczytu->setPixmapStan(sw3);
 if(ziel_s==2)okno_szczytu->setPixmapStan(sw2);
 if(ziel_s==1)okno_szczytu->setPixmapStan(sw1);

}

void MainWindow::on_button_4_clicked()
{//karpacz
  szczyt   *okno_szczytu = new szczyt(this);
  QPixmap nw1(":/zasoby/images/nw1.png");
  QPixmap nw2(":/zasoby/images/nw2.png");
  QPixmap nw3(":/zasoby/images/nw3.png");
  QPixmap nw4(":/zasoby/images/nw4.png");
  QPixmap nw5(":/zasoby/images/nw5.png");
  QPixmap sw1(":/zasoby/images/sw1.png");
  QPixmap sw2(":/zasoby/images/sw2.png");
  QPixmap sw3(":/zasoby/images/sw3.png");
  QPixmap sw4(":/zasoby/images/sw4.png");
  QPixmap sw5(":/zasoby/images/sw5.png");
    okno_szczytu->show();
okno_szczytu->setFixedSize(1201, 498);
okno_szczytu->setTextToLabelX(foo4);
okno_szczytu->setTextToTemperatura(str_tkar);
okno_szczytu->setTextToCisnienie(str_ckar);
okno_szczytu->setTextToOpady(str_okar);
okno_szczytu->setTextToWiatr(str_wkar);
if(str_nkar=="1.png")okno_szczytu->setPixmapNiebo(nw1), kar_n=1;
if(str_nkar=="2.png")okno_szczytu->setPixmapNiebo(nw2), kar_n=2;
if(str_nkar=="3.png") okno_szczytu->setPixmapNiebo(nw2), kar_n=2;
if(str_nkar=="4.png")okno_szczytu->setPixmapNiebo(nw3), kar_n=3;
if(str_nkar=="5.png")okno_szczytu->setPixmapNiebo(nw4), kar_n=4;
if(str_nkar=="9.png")okno_szczytu->setPixmapNiebo(nw4), kar_n=4;
if(str_nkar=="10.png")  okno_szczytu->setPixmapNiebo(nw4), kar_n=4;
if(str_nkar=="6.png")okno_szczytu->setPixmapNiebo(nw5), kar_n=5;

if(kar_s==5)okno_szczytu->setPixmapStan(sw5);
if(kar_s==4)okno_szczytu->setPixmapStan(sw4);
if(kar_s==3)okno_szczytu->setPixmapStan(sw3);
if(kar_s==2)okno_szczytu->setPixmapStan(sw2);
if(kar_s==1)okno_szczytu->setPixmapStan(sw1);
}

void MainWindow::on_button_3_clicked()
{//krynica
   szczyt   * okno_szczytu = new szczyt(this);
   QPixmap nw1(":/zasoby/images/nw1.png");
   QPixmap nw2(":/zasoby/images/nw2.png");
   QPixmap nw3(":/zasoby/images/nw3.png");
   QPixmap nw4(":/zasoby/images/nw4.png");
   QPixmap nw5(":/zasoby/images/nw5.png");
   QPixmap sw1(":/zasoby/images/sw1.png");
   QPixmap sw2(":/zasoby/images/sw2.png");
   QPixmap sw3(":/zasoby/images/sw3.png");
   QPixmap sw4(":/zasoby/images/sw4.png");
   QPixmap sw5(":/zasoby/images/sw5.png");
    okno_szczytu->show();
okno_szczytu->setFixedSize(1201, 498);
okno_szczytu->setTextToLabelX(foo3);
okno_szczytu->setTextToTemperatura(str_tkr);
okno_szczytu->setTextToCisnienie(str_ckr);
okno_szczytu->setTextToOpady(str_okr);
okno_szczytu->setTextToWiatr(str_wkr);
if(str_nkr=="1.png")okno_szczytu->setPixmapNiebo(nw1);
if(str_nkr=="2.png")okno_szczytu->setPixmapNiebo(nw2);
if(str_nkr=="3.png") okno_szczytu->setPixmapNiebo(nw2);
if(str_nkr=="4.png")okno_szczytu->setPixmapNiebo(nw3);
if(str_nkr=="5.png")okno_szczytu->setPixmapNiebo(nw4);
if(str_nkr=="9.png")okno_szczytu->setPixmapNiebo(nw4);
if(str_nkr=="10.png")  okno_szczytu->setPixmapNiebo(nw4);
if(str_nkr=="6.png")okno_szczytu->setPixmapNiebo(nw5);

if(kry_s==5)okno_szczytu->setPixmapStan(sw5);
if(kry_s==4)okno_szczytu->setPixmapStan(sw4);
if(kry_s==3)okno_szczytu->setPixmapStan(sw3);
if(kry_s==2)okno_szczytu->setPixmapStan(sw2);
if(kry_s==1)okno_szczytu->setPixmapStan(sw1);
}

void MainWindow::on_actionAktualizacja_Danych_triggered()
{

    QString html, htmlAFT;
    QNetworkAccessManager manager;
    QNetworkReply *response;
    QEventLoop event;
    QString line;
    QFile  karpacz_source("C:/Users/wojta/Desktop/wizualizacja/projekt015/images/karpacz.txt");
    QFile  zieleniec_source("C:/Users/wojta/Desktop/wizualizacja/projekt015/images/zieleniec.txt");
    QFile  szczyrk_source("C:/Users/wojta/Desktop/wizualizacja/projekt015/images/szczyrk.txt");
    QFile  krynica_source("C:/Users/wojta/Desktop/wizualizacja/projekt015/images/krynica.txt");
    QTextStream inout1(&karpacz_source);
    QTextStream inout2(&zieleniec_source);
    QTextStream inout3(&szczyrk_source);
    QTextStream inout4(&krynica_source);

    QRegExp rx_html("\\Dziś(.*)\\km/h");
    QRegExp rx_newline("(.*)\\n");
    response = manager.get(QNetworkRequest(QUrl("view-source:http://www.skifever.pl/prognoza-pogody-na-narty/prognoza-pogody-polska/prognoza-pogody-dolnoslaskie?tl=9")));
    connect(response,SIGNAL(finished()),&event,SLOT(quit()));
    event.exec();
    html = QString::fromUtf8(response->readAll());
    rx_html.indexIn(html);
    karpacz_source.open(QIODevice::ReadWrite);
    inout1<<rx_html.cap(0);
do{
      line = inout1.readLine();
      rx_newline.indexIn(line);
      htmlAFT+=rx_newline.cap(1);
}while(!line.isNull());
    inout1 << htmlAFT;
    karpacz_source.flush();
    karpacz_source.close();

    response = manager.get(QNetworkRequest(QUrl("view-source:http://www.skifever.pl/prognoza-pogody-na-narty/prognoza-pogody-polska/prognoza-pogody-dolnoslaskie?tl=27")));
    connect(response,SIGNAL(finished()),&event,SLOT(quit()));
    event.exec();
    html = QString::fromUtf8(response->readAll());
    zieleniec_source.open(QIODevice::ReadWrite);
    inout2<<rx_html.cap(0);
do{
      line = inout2.readLine();
      rx_newline.indexIn(line);
      htmlAFT+=rx_newline.cap(1);
}while(!line.isNull());
    inout2<<htmlAFT;
    zieleniec_source.flush();
    zieleniec_source.close();

    response = manager.get(QNetworkRequest(QUrl("view-source:http://www.skifever.pl/prognoza-pogody-na-narty/prognoza-pogody-polska/prognoza-pogody-malopolska?tl=15")));
    connect(response,SIGNAL(finished()),&event,SLOT(quit()));
    event.exec();
    html = QString::fromUtf8(response->readAll());
    szczyrk_source.open(QIODevice::ReadWrite);
    inout3<<rx_html.cap(0);
do{
      line = inout3.readLine();
      rx_newline.indexIn(line);
      htmlAFT+=rx_newline.cap(1);
}while(!line.isNull());
    inout3<<htmlAFT;
    szczyrk_source.flush();
    szczyrk_source.close();

    response = manager.get(QNetworkRequest(QUrl("view-source:http://www.skifever.pl/prognoza-pogody-na-narty/prognoza-pogody-polska/prognoza-pogody-slaskie?tl=14")));
    connect(response,SIGNAL(finished()),&event,SLOT(quit()));
    event.exec();
    html = QString::fromUtf8(response->readAll());
    krynica_source.open(QIODevice::ReadWrite);
    inout4<<rx_html.cap(0);
do{
      line = inout4.readLine();
      rx_newline.indexIn(line);
      htmlAFT+=rx_newline.cap(1);
}while(!line.isNull());
    inout4<<htmlAFT;
    krynica_source.flush();
    krynica_source.close();



    karpacz_source.open(QIODevice::ReadWrite);

    line =inout1.readLine();
    QRegExp rx_nkar("([0-9])\\.png");
    QRegExp rx_tkar("([0-9])\\&");
    QRegExp rx_t2kar("([1-9][0-9])\\&");
    QRegExp rx_okar("([0-9])\\s\\mm");
    QRegExp rx_o2kar("([1-9][0-9])\\s\\mm");
    QRegExp rx_ckar("(10[0-9][0-9](.)[0-9])\\s\\hPa");
    QRegExp rx_wkar("([0-9])\\s\\km/h");
    QRegExp rx_w2kar("([1-9][0-9])\\s\\km/h");
    rx_nkar.indexIn(line);
    rx_tkar.indexIn(line);
    rx_t2kar.indexIn(line);
    rx_okar.indexIn(line);
    rx_o2kar.indexIn(line);
    rx_ckar.indexIn(line);
    rx_wkar.indexIn(line);
    rx_w2kar.indexIn(line);

    str_nkar = rx_nkar.cap(0);
    if(line.contains("bellow")){
     str_tkar ="-"+ rx_tkar.cap(1);
     str_t2kar ="-" +rx_t2kar.cap(1);
    }else{
        str_tkar = rx_tkar.cap(1);
        str_t2kar =rx_t2kar.cap(1);
    }
if(str_t2kar!="")str_tkar=str_t2kar;
kar_t=str_tkar.toInt();
     str_okar = rx_okar.cap(1);
     str_o2kar = rx_o2kar.cap(1);
     if(line.contains("brak"))str_okar ="0";
if(str_o2kar!="")str_okar=str_o2kar;
kar_sn=str_okar.toInt();
    str_ckar = rx_ckar.cap(0);
kar_c=str_ckar.toInt();
    str_wkar = rx_wkar.cap(1);
    str_w2kar = rx_w2kar.cap(1);
if(str_w2kar!="")str_wkar=str_w2kar;
kar_w=str_wkar.toInt();
    karpacz_source.close();
kar_s=algorytm(kar_n, kar_t, kar_sn, kar_w);


    zieleniec_source.open(QIODevice::ReadWrite);

    line =inout2.readLine();
    QRegExp rx_nziel("([0-9])\\.png");
    QRegExp rx_tziel("([0-9])\\&");
    QRegExp rx_t2ziel("([1-9][0-9])\\&");
    QRegExp rx_oziel("([0-9])\\s\\mm");
    QRegExp rx_o2ziel("([1-9][0-9])\\s\\mm");
    QRegExp rx_cziel("(10[0-9][0-9](.)[0-9])\\s\\hPa");
    QRegExp rx_wziel("([0-9])\\s\\km/h");
    QRegExp rx_w2ziel("([1-9][0-9])\\s\\km/h");
    rx_nziel.indexIn(line);
    rx_tziel.indexIn(line);
    rx_t2ziel.indexIn(line);
    rx_oziel.indexIn(line);
    rx_o2ziel.indexIn(line);
    rx_cziel.indexIn(line);
    rx_wziel.indexIn(line);
    rx_w2ziel.indexIn(line);

     str_nziel = rx_nziel.cap(0);
     if(line.contains("bellow")){
      str_tziel ="-"+ rx_tziel.cap(1);
      str_t2ziel ="-" +rx_t2ziel.cap(1);
     }else{
         str_tziel = rx_tziel.cap(1);
         str_t2ziel = rx_t2ziel.cap(1);
     }
if(str_t2ziel!="")str_tziel=str_t2ziel;
     str_oziel = rx_oziel.cap(1);
     if(line.contains("brak"))str_oziel ="0";
     str_o2ziel = rx_o2ziel.cap(1);
if(str_o2ziel!="")str_oziel=str_o2ziel;
  ziel_sn=str_oziel.toInt();
  str_cziel = rx_cziel.cap(0);
    ziel_c=str_cziel.toInt();
     str_wziel = rx_wziel.cap(1);
     str_w2ziel = rx_w2ziel.cap(1);
    if(str_w2ziel!="")str_wziel=str_w2ziel;
  ziel_w=str_wziel.toInt();
     zieleniec_source.close();
ziel_s=algorytm(ziel_n, ziel_t, ziel_sn, ziel_w);



    szczyrk_source.open(QIODevice::ReadWrite);

    line =inout3.readLine();
    QRegExp rx_nsz("([0-9])\\.png");
    QRegExp rx_tsz("([0-9])\\&");
    QRegExp rx_t2sz("([1-9][0-9])\\&");
    QRegExp rx_osz("([0-9])\\s\\mm");
    QRegExp rx_o2sz("([1-9][0-9])\\s\\mm");
    QRegExp rx_csz("(10[0-9][0-9](.)[0-9])\\s\\hPa");
    QRegExp rx_wsz("([0-9])\\s\\km/h");
    QRegExp rx_w2sz("([1-9][0-9])\\s\\km/h");
    rx_nsz.indexIn(line);
    rx_tsz.indexIn(line);
    rx_t2sz.indexIn(line);
    rx_osz.indexIn(line);
    rx_o2sz.indexIn(line);
    rx_csz.indexIn(line);
    rx_wsz.indexIn(line);
    rx_w2sz.indexIn(line);

     str_nsz = rx_nsz.cap(0);
     if(line.contains("bellow")){
      str_tsz ="-"+ rx_tsz.cap(1);
      str_t2sz ="-" +rx_t2sz.cap(1);
     }else{
         str_tsz = rx_tsz.cap(1);
         str_t2sz = rx_t2sz.cap(1);
     }
         if(str_t2sz!="")str_tsz=str_t2sz;
     str_osz = rx_osz.cap(1);
     if(line.contains("brak"))str_osz ="0";
     str_o2sz = rx_o2sz.cap(1);
      if(str_o2sz!="")str_osz=str_o2sz;
      sz_sn=str_osz.toInt();
     str_csz = rx_csz.cap(0);
     sz_c=str_csz.toInt();
     str_wsz = rx_wsz.cap(1);
     str_w2sz = rx_w2sz.cap(1);
    if(str_w2sz!="")str_wsz=str_w2sz;
      sz_w=str_wsz.toInt();
     szczyrk_source.close();
sz_s=algorytm(sz_n, sz_t, sz_sn, sz_w);



    krynica_source.open(QIODevice::ReadWrite);

    line =inout4.readLine();
    QRegExp rx_nkr("([0-9])\\.png");
    QRegExp rx_tkr("([0-9])\\&");
    QRegExp rx_t2kr("([1-9][0-9])\\&");
    QRegExp rx_okr("([0-9])\\s\\mm");
    QRegExp rx_o2kr("([1-9][0-9])\\s\\mm");
    QRegExp rx_ckr("(10[0-9][0-9](.)[0-9])\\s\\hPa");
    QRegExp rx_wkr("([0-9])\\s\\km/h");
    QRegExp rx_w2kr("([1-9][0-9])\\s\\km/h");
    rx_nkr.indexIn(line);
    rx_tkr.indexIn(line);
    rx_t2kr.indexIn(line);
    rx_okr.indexIn(line);
    rx_o2kr.indexIn(line);
    rx_ckr.indexIn(line);
    rx_wkr.indexIn(line);
    rx_w2kr.indexIn(line);

     str_nkr = rx_nkr.cap(0);
     if(line.contains("bellow")){
      str_tkr ="-"+ rx_tkr.cap(1);
      str_t2kr ="-" +rx_t2kr.cap(1);
     }else{
         str_tkr = rx_tkr.cap(1);
         str_t2kr = rx_t2kr.cap(1);
     }
       if(str_t2kr!="")str_tkr=str_t2kr;
     str_okr = rx_okr.cap(1);
     if(line.contains("brak"))str_okr ="0";
     str_o2kr = rx_o2kr.cap(1);
       if(str_o2kr!="")str_okr=str_o2kr;
       kry_sn=str_okr.toInt();
     str_ckr = rx_ckr.cap(0);
     kry_c=str_ckr.toInt();
     str_wkr = rx_wkr.cap(1);
     str_w2kr = rx_w2kr.cap(1);
         if(str_w2kr!="")str_wkr=str_w2kr;
kry_w=str_wkr.toInt();
    krynica_source.close();
kry_s=algorytm(kry_n, kry_t, kry_sn, kry_w);

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
    if((kar_sn>0&&kar_sn<=15)||str_okar=="0 mm")ui->karpacz_snieg->setPixmap(sn1);
    if(kar_sn>15&&kar_sn<=30)ui->karpacz_snieg->setPixmap(sn2);
    if(kar_sn>30)ui->karpacz_snieg->setPixmap(sn3);
    //Zachmurzenie
    if(str_nkar=="1.png")ui->karpacz_nieb->setPixmap(n1);
    if(str_nkar=="2.png") ui->karpacz_nieb->setPixmap(n2);
    if(str_nkar=="3.png") ui->karpacz_nieb->setPixmap(n2);
    if(str_nkar=="4.png")ui->karpacz_nieb->setPixmap(n3);
    if(str_nkar=="5.png") ui->karpacz_nieb->setPixmap(n4);
    if(str_nkar=="9.png") ui->karpacz_nieb->setPixmap(n4);
    if(str_nkar=="10.png") ui->karpacz_nieb->setPixmap(n4);
    if(str_nkar=="6.png") ui->karpacz_nieb->setPixmap(n5);
    //Temperatura
    ui->karpacz_temp->setText(str_tkar);


    //Ogólny stan
    if(kar_s==1)ui->karpacz_stan->setPixmap(s1);
    if(kar_s==2)ui->karpacz_stan->setPixmap(s2);
    if(kar_s==3) ui->karpacz_stan->setPixmap(s3);
    if(kar_s==4)ui->karpacz_stan->setPixmap(s4);
    if(kar_s==5)ui->karpacz_stan->setPixmap(s5);
    ////////Warunki Zieleniec
    //śnieg
    if((ziel_sn>0&&ziel_sn<=15)||str_oziel=="0 mm")ui->zieleniec_snieg->setPixmap(sn1);
    if(ziel_sn>15&&ziel_sn<=30)ui->zieleniec_snieg->setPixmap(sn2);
    if(ziel_sn>30)ui->zieleniec_snieg->setPixmap(sn3);
    //zachmurzenie
    if(str_nziel=="1.png")ui->zieleniec_nieb->setPixmap(n1);
    if(str_nziel=="2.png") ui->zieleniec_nieb->setPixmap(n2);
    if(str_nziel=="3.png") ui->zieleniec_nieb->setPixmap(n2);
    if(str_nziel=="4.png")ui->zieleniec_nieb->setPixmap(n3);
    if(str_nziel=="5.png") ui->zieleniec_nieb->setPixmap(n4);
    if(str_nziel=="9.png") ui->zieleniec_nieb->setPixmap(n4);
    if(str_nziel=="10.png") ui->zieleniec_nieb->setPixmap(n4);
    if(str_nziel=="6.png") ui->zieleniec_nieb->setPixmap(n5);
    //Temperatura
    ui->zieleniec_temp->setText(str_tziel);
    //Ogólny stan
    if(ziel_s==1)ui->zieleniec_stan->setPixmap(s1);
    if(ziel_s==2) ui->zieleniec_stan->setPixmap(s2);
    if(ziel_s==3)ui->zieleniec_stan->setPixmap(s3);
    if(ziel_s==4)ui->zieleniec_stan->setPixmap(s4);
    if(ziel_s==5)ui->zieleniec_stan->setPixmap(s5);
    ///////////Warunki Szczyrk
    // śnieg
    if((sz_sn>0&&sz_sn<=15)||str_osz=="0 mm")ui->szczyrk_snieg->setPixmap(sn1);
    if(sz_sn>15&&sz_sn<=30)ui->szczyrk_snieg->setPixmap(sn2);
    if(sz_sn>30)ui->szczyrk_snieg->setPixmap(sn3);
    //zachmurzenie
    if(str_nsz=="1.png")ui->szczyrk_nieb->setPixmap(n1);
    if(str_nsz=="2.png") ui->szczyrk_nieb->setPixmap(n2);
    if(str_nsz=="3.png") ui->szczyrk_nieb->setPixmap(n2);
    if(str_nsz=="4.png")ui->szczyrk_nieb->setPixmap(n3);
    if(str_nsz=="5.png") ui->szczyrk_nieb->setPixmap(n4);
    if(str_nsz=="9.png") ui->szczyrk_nieb->setPixmap(n4);
    if(str_nsz=="10.png") ui->szczyrk_nieb->setPixmap(n4);
    if(str_nsz=="6.png") ui->szczyrk_nieb->setPixmap(n5);
    //Temperatura
    ui->szczyrk_temp->setText(str_tsz);
    //Ogólny stan
    if(sz_s==1)ui->szczyrk_stan->setPixmap(s1);
    if(sz_s==2) ui->szczyrk_stan->setPixmap(s2);
    if(sz_s==3)ui->szczyrk_stan->setPixmap(s3);
    if(sz_s==4)ui->szczyrk_stan->setPixmap(s4);
    if(sz_s==5) ui->szczyrk_stan->setPixmap(s5);
    ////////Warunki Krynica
    //śnieg
    if((kry_sn>0&&kry_sn<=15)||str_okr=="0 mm")ui->krynica_snieg->setPixmap(sn1);
    if(kry_sn>15&&kry_sn<=30)ui->krynica_snieg->setPixmap(sn2);
    if(kry_sn>30)ui->krynica_snieg->setPixmap(sn3);
    //zachmurzenie
    if(str_nkr=="1.png")ui->krynica_nieb->setPixmap(n1);
    if(str_nkr=="2.png") ui->krynica_nieb->setPixmap(n2);
    if(str_nkr=="3.png") ui->krynica_nieb->setPixmap(n2);
    if(str_nkr=="4.png")ui->krynica_nieb->setPixmap(n3);
    if(str_nkr=="5.png") ui->krynica_nieb->setPixmap(n4);
    if(str_nkr=="9.png") ui->krynica_nieb->setPixmap(n4);
    if(str_nkr=="10.png") ui->krynica_nieb->setPixmap(n4);
    if(str_nkr=="6.png") ui->krynica_nieb->setPixmap(n5);
    //Temperatura
    ui->krynica_temp->setText(str_tkr);
    //Ogólny stan
    if(kry_s==1)ui->krynica_stan->setPixmap(s1);
    if(kry_s==2)ui->krynica_stan->setPixmap(s2);
    if(kry_s==3)ui->krynica_stan->setPixmap(s3);
    if(kry_s==4)ui->krynica_stan->setPixmap(s4);
    if(kry_s==5)ui->krynica_stan->setPixmap(s5);




}
