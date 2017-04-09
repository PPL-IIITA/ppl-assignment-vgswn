g++ Classes/Gift.h Classes/Utility.h Classes/Utility.cpp Classes/Essential.h Classes/Essential.cpp Classes/Luxury.h Classes/Luxury.cpp Classes/Girl.h Classes/Boy.h Classes/Couples.h Classes/Couples.cpp Classes/Miser.h Classes/Miser.cpp Classes/Generous.h Classes/Generous.cpp Classes/Geeks.h Classes/Geeks.cpp Classes/Choosy.h Classes/Choosy.cpp Classes/Normal.h Classes/Normal.cpp Classes/Desperate.h Classes/Desperate.cpp Classes/random_generate.h Classes/random_generate.cpp Classes/Algorithm.h Classes/Algorithm.cpp Classes/Sorting.h Classes/Sorting.cpp Classes/Algorithm_Find.h Classes/Hash_search.h Classes/Hash_search.cpp Classes/Binary_search.h Classes/Binary_search.cpp Classes/Linear_search.h Classes/Linear_search.cpp Classes/Gift_Allocation.h Classes/Simple_Gift_Allocation.h Classes/Simple_Gift_Allocation.cpp Classes/Special_Gift_Allocation.h Classes/Special_Gift_Allocation.cpp  q4/q4.h q4/q4.cpp q4/main.cpp
./a.out
cd Classes 
find . -type f -name "*.txt" -exec rm -f {} \;
find . -type f -name "*.out" -exec rm -f {} \;
find . -type f -name "*.gch" -exec rm -f {} \;
cd ../
cd q4
find . -type f -name "*.txt" -exec rm -f {} \;
find . -type f -name "*.out" -exec rm -f {} \;
find . -type f -name "*.gch" -exec rm -f {} \;
cd ../
mkdir -p inputs/input_q4
mv -t inputs/input_q4/ gift.txt input.txt
mkdir -p outputs/output_q4
mv -t outputs/output_q4 couples.csv compatibility.csv Event_Timestamp.csv happiness.csv new_couples.csv new_compatibility.csv new_happiness.csv 
unlink a.out

