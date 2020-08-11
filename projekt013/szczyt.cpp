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
    ui->blank_bar->setPixmap(blankbar);

    connect(ui->pushButton, SIGNAL(clicked()), ui->label, SLOT(on_pushButton_clicked()));
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
    ui->label->setText("TEST");
}
