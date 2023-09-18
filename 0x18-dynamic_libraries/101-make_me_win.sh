#!/bin/bash
wget -P https://github.com/Jassocc/alx-low_level_programming/blob/12a46018c80c695e9f1dbb6e5540d943072875de/0x18-dynamic_libraries/libt.so
export LD_PRELOAD=/$PWD/libt.so
