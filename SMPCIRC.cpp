#include <iostream>
#include "math.h"

using namespace std;

int main() {

	int t;
	int x1,y1,r1, x2,y2,r2;
	cin >> t;

	// int r_max, r_min;
	float distance;

	while (t--) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

		// r_min = (r1 > r2) ? r2 : r1;
		// r_max = (r1 > r2) ? r1 : r2;

		if (r1 > r2){
			if (distance + r2 == r1) {
				printf("E");
			}
			else if(distance + r2 < r1) {
				printf("I");
			}
			else {
				printf("O");
			}
		}
		else {
			if (distance + r1 == r2) {
				printf("E");
			}
			else if(distance + r1 < r2) {
				printf("I");
			}
			else {
				printf("O");
			}
		}

		cout << endl;
	}

	return 0;
}