#include <iostream>
#include <memory>
#include <thread>
#include "SolverC.h"

int main() {
    SolverType type = VOLUME_SOLVER;
    SolverContext solver_ctx;

    // Smart pointer to avoid mem leak;
    auto solver = std::make_shared<SolverC *>(SolverC::Make(type, solver_ctx));

    // Stop signal;
    std::atomic<int> stop;

    // Better to launch in separate thread;
    std::thread solver_thread(solver->Solve, std::ref(stop));
    solver_thread.detach();
}
