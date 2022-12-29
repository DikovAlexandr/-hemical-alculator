#include "TemperatureSolver.hpp"

double TemperatureSolver::Solve(SolverContext ctx) {
    return ctx.pressure * ctx.volume / (8.31 * ctx.mu);
}
