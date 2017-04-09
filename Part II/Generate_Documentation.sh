 doxygen -g
 echo "INPUT+= Classes">> Doxyfile
echo "INPUT+= q3">> Doxyfile
echo "INPUT+= q4">> Doxyfile
echo "INPUT+= q5">> Doxyfile
echo "INPUT+= q6">> Doxyfile
echo "INPUT+= q7">> Doxyfile
echo "INPUT+= q8">> Doxyfile
doxygen Doxyfile
unlink Doxyfile
unlink Doxyfile.bak
mv latex/ html/
mv html Documentation_new
