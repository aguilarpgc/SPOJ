#include <iostream>

using namespace std;

int main() {

	int t,s,i;
	float num;
	cin >> t;

	while (t--) {

		cin >> s;
		i = s;
		num = 0;

		while (i > 0){
			num += (s / (float)i--);
		}

		printf("%.2f\n", num);
	}

	return 0;
}