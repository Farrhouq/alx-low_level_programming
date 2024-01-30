#!/bin/bash
wget -P /temp https://github.com/krmohammed/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libjackpot.so
export LD_PRELOAD=/temp/libjacpot.so