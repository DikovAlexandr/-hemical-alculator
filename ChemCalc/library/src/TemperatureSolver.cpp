#include "TemperatureSolver.h"

double TemperatureSolver::Solve(SolverContext ctx) {
    return ctx.data[0] * ctx.data[1] / (8.31 * ctx.data[2]);
}