/********************************************************************************
** Form generated from reading UI file 'szczyt.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SZCZYT_H
#define UI_SZCZYT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_szczyt
{
public:
    QWidget *centralwidget;
    QLabel *blank_bar;
    QLabel *labelX;
    QLabel *niebo;
    QLabel *temperatura;
    QLabel *cisnienie;
    QLabel *lc2;
    QLabel *opady;
    QLabel *wiatr;
    QLabel *tlo;
    QLabel *stan;
    QLabel *lc2_2;
    QLabel *lc2_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *szczyt)
    {
        if (szczyt->objectName().isEmpty())
            szczyt->setObjectName(QStringLiteral("szczyt"));
        szczyt->resize(1201, 480);
        centralwidget = new QWidget(szczyt);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        blank_bar = new QLabel(centralwidget);
        blank_bar->setObjectName(QStringLiteral("blank_bar"));
        blank_bar->setGeometry(QRect(0, 0, 1201, 51));
        blank_bar->setStyleSheet(QLatin1String("#blank_bar\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        blank_bar->setFrameShape(QFrame::Box);
        labelX = new QLabel(centralwidget);
        labelX->setObjectName(QStringLiteral("labelX"));
        labelX->setGeometry(QRect(4, -5, 321, 61));
        QFont font;
        font.setPointSize(20);
        labelX->setFont(font);
        niebo = new QLabel(centralwidget);
        niebo->setObjectName(QStringLiteral("niebo"));
        niebo->setGeometry(QRect(10, 60, 131, 131));
        niebo->setStyleSheet(QLatin1String("#niebo\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        temperatura = new QLabel(centralwidget);
        temperatura->setObjectName(QStringLiteral("temperatura"));
        temperatura->setGeometry(QRect(10, 190, 131, 131));
        QFont font1;
        font1.setPointSize(48);
        temperatura->setFont(font1);
        temperatura->setStyleSheet(QLatin1String("#temperatura\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        cisnienie = new QLabel(centralwidget);
        cisnienie->setObjectName(QStringLiteral("cisnienie"));
        cisnienie->setGeometry(QRect(10, 320, 401, 131));
        cisnienie->setFont(font1);
        cisnienie->setStyleSheet(QLatin1String("#cisnienie\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        lc2 = new QLabel(centralwidget);
        lc2->setObjectName(QStringLiteral("lc2"));
        lc2->setGeometry(QRect(140, 190, 91, 131));
        lc2->setFont(font1);
        lc2->setStyleSheet(QLatin1String("#lc2\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        opady = new QLabel(centralwidget);
        opady->setObjectName(QStringLiteral("opady"));
        opady->setGeometry(QRect(580, 60, 151, 131));
        opady->setFont(font1);
        opady->setStyleSheet(QLatin1String("#opady\n"
"\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        wiatr = new QLabel(centralwidget);
        wiatr->setObjectName(QStringLiteral("wiatr"));
        wiatr->setGeometry(QRect(580, 180, 151, 131));
        wiatr->setFont(font1);
        wiatr->setStyleSheet(QLatin1String("#wiatr\n"
"\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        tlo = new QLabel(centralwidget);
        tlo->setObjectName(QStringLiteral("tlo"));
        tlo->setGeometry(QRect(0, 0, 1201, 481));
        stan = new QLabel(centralwidget);
        stan->setObjectName(QStringLiteral("stan"));
        stan->setGeometry(QRect(580, 310, 131, 131));
        stan->setStyleSheet(QLatin1String("#stan\n"
"\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        lc2_2 = new QLabel(centralwidget);
        lc2_2->setObjectName(QStringLiteral("lc2_2"));
        lc2_2->setGeometry(QRect(730, 190, 181, 121));
        lc2_2->setFont(font1);
        lc2_2->setStyleSheet(QLatin1String("#lc2_2\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        lc2_3 = new QLabel(centralwidget);
        lc2_3->setObjectName(QStringLiteral("lc2_3"));
        lc2_3->setGeometry(QRect(730, 60, 141, 131));
        lc2_3->setFont(font1);
        lc2_3->setStyleSheet(QLatin1String("#lc2_3\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        szczyt->setCentralWidget(centralwidget);
        tlo->raise();
        blank_bar->raise();
        labelX->raise();
        niebo->raise();
        temperatura->raise();
        cisnienie->raise();
        lc2->raise();
        opady->raise();
        wiatr->raise();
        stan->raise();
        lc2_2->raise();
        lc2_3->raise();
        statusbar = new QStatusBar(szczyt);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        szczyt->setStatusBar(statusbar);

        retranslateUi(szczyt);

        QMetaObject::connectSlotsByName(szczyt);
    } // setupUi

    void retranslateUi(QMainWindow *szczyt)
    {
        szczyt->setWindowTitle(QApplication::translate("szczyt", "SkiSky", nullptr));
        blank_bar->setText(QString());
        labelX->setText(QApplication::translate("szczyt", "Nazwa Szczytu", nullptr));
        niebo->setText(QString());
        temperatura->setText(QString());
        cisnienie->setText(QString());
        lc2->setText(QApplication::translate("szczyt", "\302\260C", nullptr));
        opady->setText(QString());
        wiatr->setText(QString());
        tlo->setText(QString());
        stan->setText(QString());
        lc2_2->setText(QApplication::translate("szczyt", "km/h", nullptr));
        lc2_3->setText(QApplication::translate("szczyt", "mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class szczyt: public Ui_szczyt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SZCZYT_H
