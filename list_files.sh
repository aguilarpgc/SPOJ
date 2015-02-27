echo "# SPOJ
SPOJ problems.
" > "README.md"

for f in *.cpp
do
	echo "* [${f%.*}](http://www.spoj.com/problems/${f%.*})" >> "README.md"
done