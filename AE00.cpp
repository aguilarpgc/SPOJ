#include <iostream>

using namespace std;

int main() {

	int n, count = 0;

	cin >> n;
	for (int i = 2; i * i <= n; i++) {
		for (int j = i * i; j <= n; j+= i) {
			count++;
		}
	}
	count += n;
	cout << count << endl;

}