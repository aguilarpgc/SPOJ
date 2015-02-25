#include <iostream>

using namespace std;

int main() {

	int t;
	int m,n,ci,cj;
	cin >> t;

	while (t--) {
		cin >> m >> n >> ci >> cj;

		for (int i = 1; i <= m; i++){
			for (int j = 1; j <= n; j++){
				if (i == ci || j == cj) {
					printf("*");
				}
				else {
					printf(".");
				}
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}