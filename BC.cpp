#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int t, a, b, c;
	long long int m;

	scanf("%d",&t);
	for (int i = 1; t--; ){
		scanf("%d %d %d",&a, &b, &c);
		m = a * b;
		printf("Case #%d: %lld %.0f\n", i++, m * c - 1, ceil(log(a)/log(2)) +ceil(log(b)/log(2)) +ceil(log(c)/log(2)));
	}

	return 0;
}