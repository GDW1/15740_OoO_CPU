#!/bin/bash

#wacky way to run simulation and get number of cycles

exe="$1"
args="${@:2}"

#num_cycles holds the number of cycles it took this simulation to finish
num_cycles=$(./$exe $args | grep "Simulation finished on cycle:" | rev | cut -d":" -f1 | rev | tr -d ' ')
echo $num_cycles