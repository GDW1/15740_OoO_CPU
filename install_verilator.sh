#!/bin/bash

# Create a directory for Verilator
mkdir -p verilator
cd verilator

# Clone the Verilator repository
git clone https://github.com/verilator/verilator.git

# Enter the Verilator directory
cd verilator

# Checkout the latest stable release
git checkout stable

# Build and install Verilator
autoconf
./configure
make
make install