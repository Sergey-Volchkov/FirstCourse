#!/bin/bash 
gcc main.c -lm -fopenmp
./a.out
python3.4 for_c.py
