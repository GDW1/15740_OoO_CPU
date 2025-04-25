#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/Vtest.h"
#include "obj_dir/Vtest___024root.h"

#define MAX_SIM_TIME 300000
vluint64_t sim_time = 0;

#define INSTRUCTION_VAR test__DOT__cpu__DOT__instruction_vector_preg_temp

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vtest *dut = new Vtest;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    dut->runtime = MAX_SIM_TIME - 1;
    size_t nways = dut->rootp->INSTRUCTION_VAR.size();
    //How many cycles it takes to boot
    // i.e., it takes <booted> number of cycles for our INSTRUVTION VAR to not be 0
    constexpr size_t booted = 2; 
    while (!Verilated::gotFinish() && sim_time < MAX_SIM_TIME) {
cycle_start:
        auto nop = dut->rootp->test__DOT__cpu__DOT__nop;
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
        if (dut->clk == 0) {goto cycle_start;}
        for(int i = 0; i < nways; i++) {
            auto instruction = dut->rootp->INSTRUCTION_VAR[i];
            if(instruction != 0){
                goto cycle_start; //program did not finish yet
            }
        }
        if(sim_time/2 > booted) { //Have enough cycles passed/have we booted?
            break; //reached end of program
        }
    }

    /*Assume that it always takes 7 cycles to flush last ins in pipeline*/
    printf("Simulation finished on cycle: %ld\n", sim_time/2 + 3);

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}