#!/bin/sh
rm -rf build
mkdir build
cd build
cmake ..
make
echo "To run, type: './build/vector_test'"
