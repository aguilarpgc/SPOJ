#include <iostream>

using namespace std;

int main() {
	int n, aux;
	bool first = true;
	bool split = true;

	cin >> n;

	// first value
	cin >> aux;
	while (n > 1) {

		int num;
		cin >> num;

		if (first) {
			if (!(num < aux)) {
				first = false;
			}
		}
		else if (!(num > aux)) {
			split = false;
		}

		aux = num;

		n--;
	}

	cout << (split ? "Yes" : "No") << endl;

	return 0;
}