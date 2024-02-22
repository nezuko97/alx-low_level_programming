#!/bin/bash
gcc wall -pedanticc -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
