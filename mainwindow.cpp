#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Hello Programmer");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actExit_triggered()
{
    qApp->quit();
}

void MainWindow::on_btnShowInfo_clicked()
{
    QMessageBox::information(this, "Hi", "How are you today?");
}
