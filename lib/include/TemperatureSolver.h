#pragma once

#include <thread>
#include <iostream>
#include "SolverC.h"

class TemperatureSolver : public SolverC {
public:
    TemperatureSolver(SolverContext &ctx) : SolverC(ctx) {}

    double Solve(SolverContext ctx);
};
