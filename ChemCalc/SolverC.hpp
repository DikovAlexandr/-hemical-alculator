#pragma once

#include <vector>
#include <atomic>

enum SolverType {
    VOLUME_SOLVER,
    PRESSURE_SOLVER,
    TEMPERATURE_SOLVER
};

struct SolverContext {
    // params;
    double volume;
    double pressure;
    double temperature;
    double mu;
    double a;
    double b;
};

class SolverC {
protected:
    // Ctor is protected to prevent
    // abstract class instantiation;
    SolverC(SolverContext &ctx) : _ctx(ctx) {}

public:
    // Dtor is always virtual and public;
    virtual ~SolverC() {};

    // Static method to instantiate actual
    // instance of solver;
    static SolverC *Make(SolverType type, SolverContext &ctx);

    // must be implemented in derived class;
    virtual double Solve(SolverContext ctx) = 0;

protected:
    // Our data required to solve problem
    SolverContext _ctx;
};

