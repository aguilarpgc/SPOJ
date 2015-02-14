#include <iostream>

using namespace std;

int main() {
	int n;
	int a,b;
	cin >> n;

	while (n != 0) {
		cin >> a >> b;

		for(int i = 0; i < a; ++i) {
			for (int j = 0; j < b; ++j) {
				cout << ((i + j) % 2 == 0 ? "*" : ".");
			}
			cout << endl;
		}
		cout << endl;

		n--;
	}

	return 0;
}