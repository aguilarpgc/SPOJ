#include <iostream>

using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int l,c;
		cin >> l >> c;

		for(int i = 1; i <= l ; i++){		
			for(int j = 1; j <= c ; j++){

				if (i == 1 || i == l) {
				  cout << "*";
				}
				else if (j == 1 || j == c) {
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