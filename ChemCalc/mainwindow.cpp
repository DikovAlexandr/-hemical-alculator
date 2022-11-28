#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
}

void MainWindow::on_pushButton_clicked(){

}

void MainWindow::problemProperties(){
    if (ui->VT->isCheckable()){
        if (ui->IdealGase->isCheckable()){

        } //
        if (ui->vanDerVaals->isCheckable()){

        } //
        if (ui->diterichi->isCheckable()){

        } //
    }
    if (ui->pT ->isCheckable()){
        if (ui->IdealGase->isCheckable()){

        } //
        if (ui->vanDerVaals->isCheckable()){

        } //
        if (ui->diterichi->isCheckable()){

        } //
    }
    if (ui->pV->isCheckable()){
        if (ui->IdealGase->isCheckable()){

        } //
        if (ui->vanDerVaals->isCheckable()){

        } //
        if (ui->diterichi->isCheckable()){

        } //
    }
}

MainWindow::~MainWindow(){
    delete ui;
}

