#!/bin/bash
gcc -c *.c //converts c files to object files
ar rc liball.a *.o //converts objects files to library files liball
ranlib liball.a //index library liball

