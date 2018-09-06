/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *HOME_PAGE;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *page_2;
    QPushButton *pushButton_7;
    QTableView *The_Menu;
    QPushButton *ADMIN_BUTTON;
    QPushButton *TEAM_INFO_BUTTON;
    QPushButton *HOME_BUTTON;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(654, 551);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(94, 94, 94);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 90, 661, 411));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(0, 39, 255, 69), stop:0.346591 rgba(0, 158, 255, 69), stop:0.375 rgba(79, 0, 255, 69), stop:0.423533 rgba(0, 82, 255, 145), stop:0.449692 rgba(0, 82, 255, 208), stop:0.477273 rgba(71, 131, 255, 130), stop:0.579545 rgba(0, 18, 255, 130), stop:0.613636 rgba(0, 137, 255, 255), stop:0.625 rgba(0, 82, 255, 69), stop:0.732955 rgba(81, 71, 255, 130), stop:1 rgba(0, 50, 255, 69));"));
        HOME_PAGE = new QWidget();
        HOME_PAGE->setObjectName(QStringLiteral("HOME_PAGE"));
        label = new QLabel(HOME_PAGE);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 511, 411));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("image: url(:/Europe.jpg);"));
        pushButton = new QPushButton(HOME_PAGE);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(531, 56, 81, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(HOME_PAGE);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(531, 110, 81, 31));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(HOME_PAGE);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(531, 164, 81, 31));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(HOME_PAGE);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(531, 218, 81, 31));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_5 = new QPushButton(HOME_PAGE);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(531, 272, 81, 31));
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_6 = new QPushButton(HOME_PAGE);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(531, 326, 81, 31));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(HOME_PAGE);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 10, 91, 41));
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        The_Menu = new QTableView(page_2);
        The_Menu->setObjectName(QStringLiteral("The_Menu"));
        The_Menu->setGeometry(QRect(160, 80, 401, 301));
        The_Menu->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        The_Menu->horizontalHeader()->setCascadingSectionResizes(false);
        stackedWidget->addWidget(page_2);
        ADMIN_BUTTON = new QPushButton(centralWidget);
        ADMIN_BUTTON->setObjectName(QStringLiteral("ADMIN_BUTTON"));
        ADMIN_BUTTON->setGeometry(QRect(40, 20, 101, 41));
        ADMIN_BUTTON->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        TEAM_INFO_BUTTON = new QPushButton(centralWidget);
        TEAM_INFO_BUTTON->setObjectName(QStringLiteral("TEAM_INFO_BUTTON"));
        TEAM_INFO_BUTTON->setGeometry(QRect(410, 20, 101, 41));
        TEAM_INFO_BUTTON->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        HOME_BUTTON = new QPushButton(centralWidget);
        HOME_BUTTON->setObjectName(QStringLiteral("HOME_BUTTON"));
        HOME_BUTTON->setGeometry(QRect(550, 0, 101, 91));
        HOME_BUTTON->setStyleSheet(QStringLiteral("background-image: url(:/home.png);"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(200, 20, 161, 41));
        textBrowser->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "Display", nullptr));
        ADMIN_BUTTON->setText(QApplication::translate("MainWindow", "ADMIN", nullptr));
        TEAM_INFO_BUTTON->setText(QApplication::translate("MainWindow", "Team Info", nullptr));
        HOME_BUTTON->setText(QString());
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; text-decoration: underline; color:#ffffff;\">TEAM NAME</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
