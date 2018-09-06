#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}



void MainWindow::on_HOME_BUTTON_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}



//MENTAL NOTE: Work on 'TEAM INFO' button to display a dialog
// WORK ON CONNECTING DATABASE INTO QT and Start Storing informations into vectors for testing purposes.


void MainWindow::on_pushButton_7_clicked()
{
    dbmanager obj;
    QSqlQueryModel* view_menu = obj.DisplayInfo();
    ui->The_Menu->setModel(view_menu);
}
