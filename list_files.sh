echo "# SPOJ
SPOJ problems.
"

for f in *.cpp
do
	echo "* [$f](www.spoj.com/problems/${f%.*})"
done