#include <iostream>

using namespace std;

int main() {

	int t;
	int m,n,ci,cj;
	cin >> t;

	int sum,res;

	while (t--) {
		cin >> m >> n >> ci >> cj;
		sum = ci + cj;
		res = ci - cj;

		for (int i = 1; i <= m; i++){
			for (int j = 1; j <= n; j++){

				if (i + j == sum || i - j == res) {
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
