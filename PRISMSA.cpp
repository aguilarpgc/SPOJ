#include <iostream>
#include "math.h"

using namespace std;

int main() {

	int t, v;
	double factor = 18 / (sqrt(3) * pow(4, (double)1 / 3));
	double pot = 2.0 / 3;

	cin >> t;

	while(t--) {
		cin >> v;
		printf("%.10f\n", (factor * pow(v, pot)));
	}

	return 0;
}
