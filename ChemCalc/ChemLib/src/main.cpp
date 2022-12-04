#include <iostream>
#include <memory>
#include <thread>
#include "SolverC.hpp"

int main() {
    SolverType type = VOLUME_SOLVER;
    SolverContext solver_ctx;

    solver_ctx.data[0] = 1;
    solver_ctx.data[1] = 1;
    solver_ctx.data[2] = 1;

    // Smart pointer to avoid mem leak;
    auto solver = std::make_shared<SolverC *>(SolverC::Make(type, solver_ctx));

    // Stop signal;
    std::atomic<int> stop;

    // Better to launch in separate thread;
    //std::thread solver_thread(solver->Solve, std::ref(stop));
    //solver_thread.detach();


}
