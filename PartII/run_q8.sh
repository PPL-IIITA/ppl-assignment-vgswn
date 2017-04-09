g++ Classes/Gift.h Classes/Utility.h Classes/Utility.cpp Classes/Essential.h Classes/Essential.cpp Classes/Luxury.h Classes/Luxury.cpp Classes/Girl.h Classes/Boy.h Classes/Couples.h Classes/Couples.cpp Classes/Miser.h Classes/Miser.cpp Classes/Generous.h Classes/Generous.cpp Classes/Geeks.h Classes/Geeks.cpp Classes/Choosy.h Classes/Choosy.cpp Classes/Normal.h Classes/Normal.cpp Classes/Desperate.h Classes/Desperate.cpp Classes/random_generate.h Classes/random_generate.cpp Classes/Algorithm.h Classes/Algorithm.cpp Classes/Sorting.h Classes/Sorting.cpp Classes/Algorithm_Find.h Classes/Hash_search.h Classes/Hash_search.cpp Classes/Binary_search.h Classes/Binary_search.cpp Classes/Linear_search.h Classes/Linear_search.cpp Classes/Gift_Allocation.h Classes/Simple_Gift_Allocation.h Classes/Simple_Gift_Allocation.cpp Classes/Special_Gift_Allocation.h Classes/Special_Gift_Allocation.cpp  q8/q8.h q8/q8.cpp q8/main.cpp
./a.out
cd Classes 
find . -type f -name "*.txt" -exec rm -f {} \;
find . -type f -name "*.out" -exec rm -f {} \;
find . -type f -name "*.gch" -exec rm -f {} \;
cd ../
cd q8
find . -type f -name "*.txt" -exec rm -f {} \;
find . -type f -name "*.out" -exec rm -f {} \;
find . -type f -name "*.gch" -exec rm -f {} \;
cd ../
mkdir -p inputs/input_q8
mv -t inputs/input_q8/ gift.txt input.txt
mkdir -p outputs/output_q8
mv -t outputs/output_q8  Event_Timestamp.csv
unlink a.out


