/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionWyb_r_Szczytu;
    QAction *actionAktualizacja_Danych;
    QAction *actionZmiana_widoku_mapy;
    QWidget *centralWidget;
    QPushButton *button;
    QLabel *label_bg_pure;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QLabel *krynica_lab;
    QLabel *szczyrk_lab;
    QLabel *zieleniec_lab;
    QLabel *karpacz_lab;
    QLabel *karpacz_nieb;
    QLabel *karpacz_snieg;
    QLabel *zieleniec_nieb;
    QLabel *zieleniec_snieg;
    QLabel *szczyrk_nieb;
    QLabel *szczyrk_snieg;
    QLabel *krynica_nieb;
    QLabel *krynica_snieg;
    QLabel *szczyrk_stan;
    QLabel *krynica_stan;
    QLabel *karpacz_stan;
    QLabel *zieleniec_stan;
    QLabel *karpacz_temp;
    QLabel *zieleniec_temp;
    QLabel *szczyrk_temp;
    QLabel *krynica_temp;
    QLabel *lc1;
    QLabel *lc2;
    QLabel *lc3;
    QLabel *lc4;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(1201, 545);
        actionWyb_r_Szczytu = new QAction(MainWindow);
        actionWyb_r_Szczytu->setObjectName(QStringLiteral("actionWyb_r_Szczytu"));
        actionAktualizacja_Danych = new QAction(MainWindow);
        actionAktualizacja_Danych->setObjectName(QStringLiteral("actionAktualizacja_Danych"));
        actionZmiana_widoku_mapy = new QAction(MainWindow);
        actionZmiana_widoku_mapy->setObjectName(QStringLiteral("actionZmiana_widoku_mapy"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button = new QPushButton(centralWidget);
        button->setObjectName(QStringLiteral("button"));
        button->setGeometry(QRect(550, 300, 41, 41));
        button->setStyleSheet(QLatin1String("#button\n"
"{\n"
"background-color: transparent; \n"
"\n"
"}\n"
""));
        button->setIconSize(QSize(40, 42));
        label_bg_pure = new QLabel(centralWidget);
        label_bg_pure->setObjectName(QStringLiteral("label_bg_pure"));
        label_bg_pure->setGeometry(QRect(0, 0, 1200, 480));
        button_2 = new QPushButton(centralWidget);
        button_2->setObjectName(QStringLiteral("button_2"));
        button_2->setGeometry(QRect(270, 120, 41, 41));
        button_2->setStyleSheet(QLatin1String("#button_2\n"
"{\n"
"background-color: transparent; \n"
"\n"
"}\n"
"\n"
"\n"
""));
        button_2->setIconSize(QSize(40, 42));
        button_3 = new QPushButton(centralWidget);
        button_3->setObjectName(QStringLiteral("button_3"));
        button_3->setGeometry(QRect(760, 330, 41, 41));
        button_3->setStyleSheet(QLatin1String("#button_3\n"
"{\n"
"background-color: transparent; \n"
"\n"
"}\n"
"\n"
""));
        button_3->setIconSize(QSize(40, 42));
        button_4 = new QPushButton(centralWidget);
        button_4->setObjectName(QStringLiteral("button_4"));
        button_4->setGeometry(QRect(130, 60, 41, 41));
        button_4->setStyleSheet(QLatin1String("#button_4\n"
"{\n"
"background-color: transparent; \n"
"\n"
"}\n"
"\n"
""));
        button_4->setIconSize(QSize(40, 42));
        krynica_lab = new QLabel(centralWidget);
        krynica_lab->setObjectName(QStringLiteral("krynica_lab"));
        krynica_lab->setGeometry(QRect(810, 320, 55, 16));
        krynica_lab->setStyleSheet(QLatin1String("#krynica_lab\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        szczyrk_lab = new QLabel(centralWidget);
        szczyrk_lab->setObjectName(QStringLiteral("szczyrk_lab"));
        szczyrk_lab->setGeometry(QRect(600, 290, 55, 16));
        szczyrk_lab->setStyleSheet(QLatin1String("#szczyrk_lab\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        zieleniec_lab = new QLabel(centralWidget);
        zieleniec_lab->setObjectName(QStringLiteral("zieleniec_lab"));
        zieleniec_lab->setGeometry(QRect(320, 110, 55, 16));
        zieleniec_lab->setStyleSheet(QLatin1String("#zieleniec_lab\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        karpacz_lab = new QLabel(centralWidget);
        karpacz_lab->setObjectName(QStringLiteral("karpacz_lab"));
        karpacz_lab->setGeometry(QRect(180, 50, 55, 16));
        karpacz_lab->setStyleSheet(QLatin1String("#karpacz_lab\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        karpacz_nieb = new QLabel(centralWidget);
        karpacz_nieb->setObjectName(QStringLiteral("karpacz_nieb"));
        karpacz_nieb->setGeometry(QRect(90, 70, 41, 41));
        karpacz_snieg = new QLabel(centralWidget);
        karpacz_snieg->setObjectName(QStringLiteral("karpacz_snieg"));
        karpacz_snieg->setGeometry(QRect(90, 30, 41, 41));
        zieleniec_nieb = new QLabel(centralWidget);
        zieleniec_nieb->setObjectName(QStringLiteral("zieleniec_nieb"));
        zieleniec_nieb->setGeometry(QRect(230, 140, 41, 41));
        zieleniec_snieg = new QLabel(centralWidget);
        zieleniec_snieg->setObjectName(QStringLiteral("zieleniec_snieg"));
        zieleniec_snieg->setGeometry(QRect(230, 100, 41, 41));
        szczyrk_nieb = new QLabel(centralWidget);
        szczyrk_nieb->setObjectName(QStringLiteral("szczyrk_nieb"));
        szczyrk_nieb->setGeometry(QRect(510, 310, 41, 41));
        szczyrk_snieg = new QLabel(centralWidget);
        szczyrk_snieg->setObjectName(QStringLiteral("szczyrk_snieg"));
        szczyrk_snieg->setGeometry(QRect(510, 270, 41, 41));
        krynica_nieb = new QLabel(centralWidget);
        krynica_nieb->setObjectName(QStringLiteral("krynica_nieb"));
        krynica_nieb->setGeometry(QRect(720, 340, 41, 41));
        krynica_snieg = new QLabel(centralWidget);
        krynica_snieg->setObjectName(QStringLiteral("krynica_snieg"));
        krynica_snieg->setGeometry(QRect(720, 300, 41, 41));
        szczyrk_stan = new QLabel(centralWidget);
        szczyrk_stan->setObjectName(QStringLiteral("szczyrk_stan"));
        szczyrk_stan->setGeometry(QRect(550, 300, 41, 41));
        krynica_stan = new QLabel(centralWidget);
        krynica_stan->setObjectName(QStringLiteral("krynica_stan"));
        krynica_stan->setGeometry(QRect(760, 330, 41, 41));
        karpacz_stan = new QLabel(centralWidget);
        karpacz_stan->setObjectName(QStringLiteral("karpacz_stan"));
        karpacz_stan->setGeometry(QRect(130, 60, 41, 41));
        zieleniec_stan = new QLabel(centralWidget);
        zieleniec_stan->setObjectName(QStringLiteral("zieleniec_stan"));
        zieleniec_stan->setGeometry(QRect(270, 120, 41, 41));
        karpacz_temp = new QLabel(centralWidget);
        karpacz_temp->setObjectName(QStringLiteral("karpacz_temp"));
        karpacz_temp->setGeometry(QRect(180, 70, 41, 31));
        QFont font;
        font.setPointSize(14);
        karpacz_temp->setFont(font);
        karpacz_temp->setStyleSheet(QLatin1String("#karpacz_temp\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        zieleniec_temp = new QLabel(centralWidget);
        zieleniec_temp->setObjectName(QStringLiteral("zieleniec_temp"));
        zieleniec_temp->setGeometry(QRect(320, 130, 41, 31));
        zieleniec_temp->setFont(font);
        zieleniec_temp->setStyleSheet(QLatin1String("#zieleniec_temp\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        szczyrk_temp = new QLabel(centralWidget);
        szczyrk_temp->setObjectName(QStringLiteral("szczyrk_temp"));
        szczyrk_temp->setGeometry(QRect(600, 310, 41, 31));
        szczyrk_temp->setFont(font);
        szczyrk_temp->setStyleSheet(QLatin1String("#szczyrk_temp\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        krynica_temp = new QLabel(centralWidget);
        krynica_temp->setObjectName(QStringLiteral("krynica_temp"));
        krynica_temp->setGeometry(QRect(810, 340, 41, 31));
        krynica_temp->setFont(font);
        krynica_temp->setStyleSheet(QLatin1String("#krynica_temp\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        lc1 = new QLabel(centralWidget);
        lc1->setObjectName(QStringLiteral("lc1"));
        lc1->setGeometry(QRect(220, 70, 21, 31));
        QFont font1;
        font1.setPointSize(12);
        lc1->setFont(font1);
        lc1->setStyleSheet(QLatin1String("#lc1\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        lc2 = new QLabel(centralWidget);
        lc2->setObjectName(QStringLiteral("lc2"));
        lc2->setGeometry(QRect(360, 130, 21, 31));
        lc2->setFont(font1);
        lc2->setStyleSheet(QLatin1String("#lc2\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        lc3 = new QLabel(centralWidget);
        lc3->setObjectName(QStringLiteral("lc3"));
        lc3->setGeometry(QRect(640, 310, 21, 31));
        lc3->setFont(font1);
        lc3->setStyleSheet(QLatin1String("#lc3\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        lc4 = new QLabel(centralWidget);
        lc4->setObjectName(QStringLiteral("lc4"));
        lc4->setGeometry(QRect(850, 340, 21, 31));
        lc4->setFont(font1);
        lc4->setStyleSheet(QLatin1String("#lc4\n"
"{\n"
"background-color: white; \n"
"\n"
"\n"
"border: none; \n"
"background-repeat: none;\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        label_bg_pure->raise();
        zieleniec_stan->raise();
        szczyrk_stan->raise();
        krynica_stan->raise();
        karpacz_stan->raise();
        button->raise();
        button_2->raise();
        button_3->raise();
        krynica_lab->raise();
        szczyrk_lab->raise();
        zieleniec_lab->raise();
        karpacz_lab->raise();
        karpacz_nieb->raise();
        karpacz_snieg->raise();
        zieleniec_nieb->raise();
        zieleniec_snieg->raise();
        szczyrk_nieb->raise();
        szczyrk_snieg->raise();
        krynica_nieb->raise();
        krynica_snieg->raise();
        karpacz_temp->raise();
        zieleniec_temp->raise();
        szczyrk_temp->raise();
        krynica_temp->raise();
        button_4->raise();
        lc1->raise();
        lc2->raise();
        lc3->raise();
        lc4->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1201, 26));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionAktualizacja_Danych);
        menuMenu->addAction(actionZmiana_widoku_mapy);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SkiSky", nullptr));
        actionWyb_r_Szczytu->setText(QApplication::translate("MainWindow", "Wyb\303\263r Szczytu", nullptr));
        actionAktualizacja_Danych->setText(QApplication::translate("MainWindow", "Aktualizacja Danych", nullptr));
        actionZmiana_widoku_mapy->setText(QApplication::translate("MainWindow", "Zmiana widoku mapy", nullptr));
        button->setText(QString());
        label_bg_pure->setText(QString());
        button_2->setText(QString());
        button_3->setText(QString());
        button_4->setText(QString());
        krynica_lab->setText(QApplication::translate("MainWindow", "Krynica", nullptr));
        szczyrk_lab->setText(QApplication::translate("MainWindow", "Szczyrk", nullptr));
        zieleniec_lab->setText(QApplication::translate("MainWindow", "Zieleniec", nullptr));
        karpacz_lab->setText(QApplication::translate("MainWindow", "Karpacz", nullptr));
        karpacz_nieb->setText(QString());
        karpacz_snieg->setText(QString());
        zieleniec_nieb->setText(QString());
        zieleniec_snieg->setText(QString());
        szczyrk_nieb->setText(QString());
        szczyrk_snieg->setText(QString());
        krynica_nieb->setText(QString());
        krynica_snieg->setText(QString());
        szczyrk_stan->setText(QString());
        krynica_stan->setText(QString());
        karpacz_stan->setText(QString());
        zieleniec_stan->setText(QString());
        karpacz_temp->setText(QString());
        zieleniec_temp->setText(QString());
        szczyrk_temp->setText(QString());
        krynica_temp->setText(QString());
        lc1->setText(QApplication::translate("MainWindow", "\302\260C", nullptr));
        lc2->setText(QApplication::translate("MainWindow", "\302\260C", nullptr));
        lc3->setText(QApplication::translate("MainWindow", "\302\260C", nullptr));
        lc4->setText(QApplication::translate("MainWindow", "\302\260C", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
