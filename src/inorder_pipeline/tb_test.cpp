#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/Vtest.h"
#include "obj_dir/Vtest___024root.h"

#define MAX_SIM_TIME 300000
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vtest *dut = new Vtest;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    dut->runtime = MAX_SIM_TIME - 1;
    auto instruction = 1;
    int booted = 4; 
    while (!Verilated::gotFinish() && sim_time < MAX_SIM_TIME && (instruction != 0 || booted != 0)) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
        instruction = dut->rootp->test__DOT__cpu__DOT__fetch_decode_instruction_preg;
        booted = booted == 0? 0 : booted - 1;
    }

    /*Assume that it always takes 7 cycles to flush last ins in pipeline*/
    printf("Simulation finished on cycle: %ld\n", sim_time/2 + 7);

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}