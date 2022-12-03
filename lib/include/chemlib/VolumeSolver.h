#pragma once

#include <thread>
#include <iostream>
#include "SolverC.h"

class VolumeSolver : public SolverC {
public:
    VolumeSolver(SolverContext &ctx): SolverC(ctx){}

    double Solve(SolverContext ctx);

    /*
    int Solve(std::atomic<int> stop){
        for(int i=0; i<65536 && !stop;i++){
            //std::thread:: (1);
        }
        std::cout << "Solved" << std::endl;
        return 0;
    }
    */
};
