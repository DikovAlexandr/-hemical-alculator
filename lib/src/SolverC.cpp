#include "SolverC.h"
#include "VolumeSolver.h"
#include "PressureSolver.h"
#include "TemperatureSolver.h"

SolverC *SolverC::Make(SolverType type, SolverContext &ctx) {
    switch (type) {
        case VOLUME_SOLVER:
            return new VolumeSolver(ctx);
            break;
        case PRESSURE_SOLVER:
            return new PressureSolver(ctx);
            break;
        case TEMPERATURE_SOLVER:
            return new TemperatureSolver(ctx);
            break;
        default:
            return nullptr;
            break;
    }
}