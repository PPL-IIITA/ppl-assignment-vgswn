#!/bin/sh
cd src
g++ Boy.h Boy.cpp Girl.h Girl.cpp Couples.h Couples.cpp random_generate.h random_generate.cpp main.cpp q1.h q1.cpp -o output.o
./output.o
mv -t ../ couples.csv Event_Timestamp.csv input.txt 



