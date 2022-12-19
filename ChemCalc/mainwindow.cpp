#include <string>
#include <iostream>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ChemLib.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
}

void MainWindow::on_pushButton_clicked(){

}

void MainWindow::problemProperties(){

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_problemSt_activated(int index){
    switch(index){
            case 0:
                valumeCase();
                type = VOLUME_SOLVER;
                break;
            case 1:
                temperatureCase();
                type = TEMPERATURE_SOLVER;
                break;
            case 2:
                pressureCase();
                type = PRESSURE_SOLVER;
                break;
            default:
                break;
        }
}

void MainWindow::valumeCase(){
    ui->TValue->show();
    ui->pValue->show();
    ui->VValue1->hide();
    ui->VValue2->hide();
}

void MainWindow::temperatureCase(){
    ui->TValue->hide();
    ui->pValue->show();
    ui->VValue1->hide();
    ui->VValue2->show();
}

void MainWindow::pressureCase(){
    ui->TValue->show();
    ui->pValue->hide();
    ui->VValue1->show();
    ui->VValue2->hide();
}

void MainWindow::hideMoreParams(){
    ui->paramsWidget->hide();
    ui->VValue1->hide();
    ui->VValue2->hide();
}

void MainWindow::on_equationSt_activated(int index){
    if (index == 1 || index == 2) {
        ui->paramsWidget->show();
        on_aParam_returnPressed();
        on_bParam_returnPressed();
    }
    else ui->paramsWidget->hide();
}


void MainWindow::on_inputParam1_returnPressed()
{
    double param1;
    param1 = ui->inputParam1->text().toDouble();
    ctx[0] = param1;
    //qDebug() << param1;
}

void MainWindow::on_inputParam2_returnPressed()
{
    double param2;
    param2 = ui->inputParam2->text().toDouble();
    ctx[1] = param2;
    //qDebug() << param2;
}


void MainWindow::on_inputMu_returnPressed()
{
    double mu;
    mu = ui->inputMu->text().toDouble();
    ctx[2] = mu;
    //qDebug() << mu;
}


void MainWindow::on_start_clicked()
{
    //
}


void MainWindow::on_aParam_returnPressed()
{
    double a;
    a = ui->inputMu->text().toDouble();
    ctx[3] = a;
}


void MainWindow::on_bParam_returnPressed()
{
    double b;
    b = ui->inputMu->text().toDouble();
    ctx[4] = b;
}

