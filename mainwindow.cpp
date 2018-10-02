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
    QString firstName = ui->ledFname->text();
    QString lastName = ui->ledLname->text();

    QMessageBox::information(this, "Hi", firstName + " - " + lastName );
}
