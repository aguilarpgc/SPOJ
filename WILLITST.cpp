#include <iostream>

using namespace std;

int main() {

	unsigned long long n;
	cin >> n;

	if ((n <= 1) || ((n & (n - 1)) == 0)) {
		cout << "TAK";
	}
	else {
		cout << "NIE";
	}

	return 0;
}