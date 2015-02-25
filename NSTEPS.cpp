#include <iostream>

using namespace std;

int main() {

	int n,x,y;
	cin >> n;

	while (n--) {
		cin >> x >> y;
		if (x == y) {
			if (x % 2 == 1) {
				printf("%d\n", x * 2 - 1);
			}
			else {
				printf("%d\n", x * 2);
			}
		}
		else if (x - y == 2){
			if (x % 2 == 1) {
				printf("%d\n", x + y - 1);
			}
			else {
				printf("%d\n", x + y);
			}
		}
		else {
			printf("No Number\n");
		}
	}

	return 0;
}