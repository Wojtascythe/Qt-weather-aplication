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
}

szczyt::~szczyt()
{
    delete ui;
}

