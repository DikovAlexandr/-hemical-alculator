#include "VolumeSolver.h"

double VolumeSolver::Solve(SolverContext ctx) {
    return ctx.data[2] * 8.31 * ctx.data[1] / ctx.data[0];
}