#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int i = 1, t;
	long long n;
	cin >> t;

	while (t--) {
		cin >> n;
		printf("Case %i: %i\n", i++, (int)(sqrt(n + 1) - 1));
	}

	return 0;
}