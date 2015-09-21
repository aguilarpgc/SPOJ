README="README.md"
URL="http://www.spoj.com/problems/"

echo "# SPOJ
Having fun.\nSPOJ problems.
" > $README

echo "\nC" >> $README
for f in *.c
do
	echo "* [${f%.*}]($URL${f%.*})" >> $README
done

echo "\nC++" >> $README
for f in *.cpp
do
	echo "* [${f%.*}]($URL${f%.*})" >> $README
done

echo "\nPython 3" >> $README
for f in *.py
do
	echo "* [${f%.*}]($URL${f%.*})" >> $README
done
