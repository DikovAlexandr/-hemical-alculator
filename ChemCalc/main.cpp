#include "mainwindow.h"

#include <QApplication>
#include <QLineEdit>
#include <QRadioButton>
#include <iostream>
#include <memory>
#include "ChemLib.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.hideMoreParams();
    w.show();

    SolverContext solver_ctx;

    // solver_ctx.data = *w.ctx;
//    for (int i=0; i< solver_ctx.data.size(); i++){
//        solver_ctx.data[i] = w.ctx[i];
//    }

    solver_ctx.data.push_back(1);
    solver_ctx.data.push_back(2);
    solver_ctx.data.push_back(3);


     //Smart pointer to avoid mem leak;
    std::shared_ptr<SolverC> solver;
    solver.reset(SolverC::Make(w.type, solver_ctx));

    return a.exec();
}
