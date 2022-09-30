#!/bin/bash

gcc -c -Wall -Wextra -Wall -pedantic -std=c89 *.c
ar rcs liball.a *.o
