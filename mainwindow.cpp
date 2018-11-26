#include "MAINWINDOW.H"
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
void MainWindow::on_horizontalSlider_valueChanged(int index)
    {ui->centralWidget->setStyleSheet("background-color: rgb(" +QString::number(index)+",0,0" ")");}
void MainWindow::on_horizontalSlider_2_valueChanged(int index1)
    {ui->centralWidget->setStyleSheet("background-color: rgb(""0," +QString::number(index1)+",0" ")");}
void MainWindow::on_horizontalSlider_3_valueChanged(int index2)
    {ui->centralWidget->setStyleSheet("background-color: rgb(""0,0," +QString::number(index2)+ ")");}

