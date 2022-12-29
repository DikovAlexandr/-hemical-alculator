#include <string>
#include <iostream>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ChemLib.hpp"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_problemSt_activated(int index) {
    switch (index) {
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

// Interface control
void MainWindow::valumeCase() {
    ui->TValue->show();
    ui->pValue->show();
    ui->VValue1->hide();
    ui->VValue2->hide();
}

void MainWindow::temperatureCase() {
    ui->TValue->hide();
    ui->pValue->show();
    ui->VValue1->hide();
    ui->VValue2->show();
}

void MainWindow::pressureCase() {
    ui->TValue->show();
    ui->pValue->hide();
    ui->VValue1->show();
    ui->VValue2->hide();
}

void MainWindow::hideMoreParams() {
    ui->paramsWidget->hide();
    ui->VValue1->hide();
    ui->VValue2->hide();
}

// Unhide extra params
void MainWindow::on_equationSt_activated(int index) {
    if (index == 1 || index == 2) {
        ui->paramsWidget->show();
        on_aParam_returnPressed();
        on_bParam_returnPressed();
    } else ui->paramsWidget->hide();
}

// Recognition of the first parameter
void MainWindow::on_inputParam1_returnPressed() {
    double param1;
    param1 = ui->inputParam1->text().toDouble();
    if (type == PRESSURE_SOLVER) ctx.volume = param1;
    else if (type == VOLUME_SOLVER) ctx.pressure = param1;
    else if (type == TEMPERATURE_SOLVER) ctx.pressure = param1;
    // qDebug() << "param1" << param1;
}

// Recognition of the second parameter
void MainWindow::on_inputParam2_returnPressed() {
    double param2;
    param2 = ui->inputParam2->text().toDouble();
    if (type == PRESSURE_SOLVER) ctx.temperature = param2;
    else if (type == VOLUME_SOLVER) ctx.temperature = param2;
    else if (type == TEMPERATURE_SOLVER) ctx.volume = param2;
    // qDebug() << "param2" << param2;
}

// Recognition of the mu
void MainWindow::on_inputMu_returnPressed() {
    double mu;
    mu = ui->inputMu->text().toDouble();
    ctx.mu = mu;
    // qDebug() << mu;
}

// Recognition of the a
void MainWindow::on_aParam_returnPressed() {
    double a;
    a = ui->inputMu->text().toDouble();
    ctx.a = a;
    // qDebug() << a;
}

// Recognition of the b
void MainWindow::on_bParam_returnPressed() {
    double b;
    b = ui->inputMu->text().toDouble();
    ctx.b = b;
    // qDebug() << b;
}

// Calculation and outputting
void MainWindow::on_start_clicked() {
    // Smart pointer to avoid mem leak;
    std::shared_ptr<SolverC> solver;
    solver.reset(SolverC::Make(type, ctx));
    if (type == PRESSURE_SOLVER) ui->outPut->setText(QVariant(solver->Solve(ctx)).toString() + " Па");
    else if (type == VOLUME_SOLVER) ui->outPut->setText(QVariant(solver->Solve(ctx)).toString() + " м^3");
    else if (type == TEMPERATURE_SOLVER) ui->outPut->setText(QVariant(solver->Solve(ctx)).toString() + " К");
}

