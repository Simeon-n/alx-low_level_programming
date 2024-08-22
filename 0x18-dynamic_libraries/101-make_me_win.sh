#!/bin/bash
wget -P .. https://github.com/Simeon-n/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libscript.so
export LD_PERIOD="$PWD/../libscript.so"
