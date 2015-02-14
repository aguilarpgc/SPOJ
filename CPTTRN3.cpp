#include <iostream>

using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int l,c;
		cin >> l >> c;

		for(int i = 0; i < (l * 3) + 1 ; i++){		
			for(int j = 0; j < (c * 3) + 1; j++){

				if (i % 3 == 0 || j % 3 == 0) {
					cout << "*";
				}
				else {
					cout << ".";
				}
			}		
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}