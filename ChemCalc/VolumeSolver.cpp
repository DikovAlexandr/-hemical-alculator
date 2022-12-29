#include "VolumeSolver.hpp"

double VolumeSolver::Solve(SolverContext ctx) {
    return ctx.mu * 8.31 * ctx.temperature / ctx.pressure;
}
