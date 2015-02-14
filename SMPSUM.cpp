#include <iostream>

using namespace std;

int main() {

	int a,b;
	int tot = 0;

	cin >> a >> b;

	for (; a<=b; a++) {
		tot += a * a;
	}

	cout << tot << endl; 

	return 0;
}