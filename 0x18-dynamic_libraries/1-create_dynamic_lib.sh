#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fpic *.c
gcc -shared -o liball.so ^.o
export LD_LIBRARY_PATB=.:$LD_LIBRARY_PATH
