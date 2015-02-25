#include <iostream>

using namespace std;

int main() {
	int n;
	string s;

	cin >> n;

	while (n--) {
		cin >> s;

		if (s == string(s.rbegin(), s.rend())) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}