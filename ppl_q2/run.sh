#!/bin/sh
cd src
g++ Boy.h Boy.cpp Girl.h Girl.cpp Couples.h Couples.cpp random_generate.h random_generate.cpp main.cpp q2.h q2.cpp Gift.h Gift.cpp -o output.o
./output.o
mv -t ../ couples.csv compatibility.csv Event_Timestamp.csv happiness.csv input.txt gift.txt



