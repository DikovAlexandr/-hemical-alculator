#pragma once

#include <thread>
#include <iostream>
#include "SolverC.h"

class PressureSolver : public SolverC {
public:
    PressureSolver(SolverContext &ctx): SolverC(ctx){}

    double Solve(SolverContext ctx);
};
