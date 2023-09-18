#!/bin/bash
wget -P https://github.com/Jassocc/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libt.so
export LD_PRELOAD=/$PWD/../libt.so
