#!/bin/bash
gcc -c -IPIC *.c
gcc -shared -o liball.so *.o
