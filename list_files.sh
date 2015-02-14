echo "# SPOJ
SPOJ problems.
"

for f in *.cpp
do
	echo "* [$f](http://www.spoj.com/problems/${f%.*})"
done