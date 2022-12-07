#include "mainwindow.h"

#include <QApplication>
#include <QLineEdit>
#include <QRadioButton>
#include <iostream>
#include <memory>
#include "ChemLib/inc/ChemLib.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.hideMoreParams();
    w.show();
/*
    SolverContext solver_ctx;

//    // solver_ctx.data = *w.ctx;
//    for (int i=0; i< std::size(w.ctx); i++){
//        solver_ctx.data[i] = w.ctx[i];
//    }

    solver_ctx.data[0] = 1;
    solver_ctx.data[1] = 1;
    solver_ctx.data[2] = 1;

    // Smart pointer to avoid mem leak;
    //std::shared_ptr<SolverC> solver;
    //solver.reset(SolverC::Make(w.type, solver_ctx));
*/

    return a.exec();
}
