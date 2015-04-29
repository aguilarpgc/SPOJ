README="README.md"
URL="http://www.spoj.com/problems/"

echo "# SPOJ
SPOJ problems.
" > $README

echo "C++" >> $README
for f in *.cpp
do
	echo "* [${f%.*}]($URL${f%.*})" >> $README
done

echo "
Python 3" >> $README
for f in *.py
do
	echo "* [${f%.*}]($URL${f%.*})" >> $README
done
