#!/bin/bash

# Create a directory for Verilator
mkdir -p verilator
cd verilator

#install dependencies (https://github.com/verilator/verilator/blob/master/ci/docker/buildenv/Dockerfile)
apt-get install --no-install-recommends -y autoconf bc bison build-essential ca-certificates ccache clang cmake flex gdb git gtkwave help2man libfl2 libfl-dev libgoogle-perftools-dev libsystemc libsystemc-dev numactl perl python3 wget z3 zlib1g zlib1g-dev

# Clone the Verilator repository
git clone https://github.com/verilator/verilator.git

# Enter the Verilator directory
cd verilator

# Checkout the stable release (commit ac3f30e)
git checkout ac3f30ed6c9f1c9530bb68192396c117c14419d0

# get current absolute path
VERILATOR_ROOT=$(pwd)/verilator/verilator

# Build and install Verilator
autoconf
./configure --prefix=$VERILATOR_ROOT
make -j4
make install -j4
