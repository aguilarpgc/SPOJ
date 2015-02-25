#include <iostream>

using namespace std;

int main() {
	int t, n, k, f;
	cin >> t;

	while (t--) {
		cin >> n >> k >> f >> f;
		cout << (k * f - n) / (k - 1) << endl;
	}

	return 0;
}