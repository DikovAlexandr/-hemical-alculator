#pragma once

#include <thread>
#include <iostream>
#include "SolverC.hpp"

class PressureSolver : public SolverC {
public:
    PressureSolver(SolverContext &ctx): SolverC(ctx){}

    double Solve(SolverContext ctx);

    virtual ~PressureSolver(){};
};
