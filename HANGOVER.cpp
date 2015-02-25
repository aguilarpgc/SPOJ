#include <iostream>

using namespace std;

int main() {
	double x,h,i;

	cin >> h;

	while (h) {
		i = 2;
		x = 1 / i;
		while (x < h) {
			x += 1 / ++i;
		}

		printf("%.0f card(s)\n", i - 1);
		cin >> h;
	}

	return 0;
}