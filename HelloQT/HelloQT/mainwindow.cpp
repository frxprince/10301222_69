#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int k=0;
void MainWindow::on_Button1_clicked()
{  k++;
    cout<<ui->Label1->text().toStdString()<<endl;
    ui->Label1->setText("Hello World"+ QString::number(k));
}

