#include "szczyt.h"
#include "ui_szczyt.h"
#include <QPixmap>
#include "QCloseEvent"
#include "mainwindow.h"
szczyt::szczyt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::szczyt)
{
    ui->setupUi(this);
    QPixmap blankbar(":/zasoby/images/blankbar.png");
    QPixmap tlo(":/zasoby/images/ski-2.jpg");
    ui->blank_bar->setPixmap(blankbar);
    ui->tlo->setPixmap(tlo);

}

szczyt::~szczyt()
{
    delete ui;
}


void szczyt::on_label_linkActivated(const QString &link)
{

}

void szczyt::on_pushButton_clicked()
{
    ui->labelX->setText("TEST");
}

void szczyt::setTextToLabelX(QString& a){
     ui->labelX->setText(a);
}
void szczyt::setTextToTemperatura(QString& a){
     ui->temperatura->setText(a);
}
void szczyt::setTextToCisnienie(QString& a){
     ui->cisnienie->setText(a);
}
void szczyt::setTextToOpady(QString& a){
     ui->opady->setText(a);
}
void szczyt::setTextToWiatr(QString& a){
     ui->wiatr->setText(a);
}
void szczyt::setPixmapNiebo(QPixmap& a)
{
    ui->niebo->setPixmap(a);
}
void szczyt::setPixmapStan(QPixmap &a)
{
    ui->stan->setPixmap(a);
}
