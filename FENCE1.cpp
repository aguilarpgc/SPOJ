#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int n;
	cin >> n;

	float TWO_PI = (2 * M_PI);
	
	while (n) {
		printf("%.2f\n", pow(n, 2) / TWO_PI);
		cin >> n;
	}

	return 0;
}