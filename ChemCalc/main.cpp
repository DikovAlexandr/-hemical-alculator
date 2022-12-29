#include <QApplication>
#include <QLineEdit>
#include <QRadioButton>
#include <iostream>
#include <memory>

#include "mainwindow.h"
#include "ChemLib.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.hideMoreParams();
    w.show();

    //SolverType solver_type;

    //SolverContext solver_ctx;

    // solver_ctx.data = *w.ctx;
//    for (int i=0; i< solver_ctx.data.size(); i++){
//        solver_ctx.data[i] = w.ctx[i];
//    }


     //Smart pointer to avoid mem leak;
//    std::shared_ptr<SolverC> solver;
//    solver.reset(SolverC::Make(w.type, solver_ctx));

    return a.exec();
}
