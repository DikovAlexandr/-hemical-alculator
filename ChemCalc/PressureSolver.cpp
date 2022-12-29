#include "PressureSolver.hpp"

double PressureSolver::Solve(SolverContext ctx) {
    return ctx.mu * 8.31 * ctx.temperature / ctx.volume;
}
