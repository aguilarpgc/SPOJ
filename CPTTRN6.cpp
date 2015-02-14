#include <iostream>

using namespace std;

int main() {

	int t;
	int l,c,h,w;
	cin >> t;

	int l1,c1;

	while (t--) {
		cin >> l >> c >> h >> w;
		l1 = h + (l * (h + 1)) ;
		c1 = w + (c * (w + 1));

		for (int i = 1; i <= l1; i++){
			for (int j = 1; j <= c1; j++){

				if (i % (h + 1) == 0) {
					if (j % (w + 1) == 0) {
						printf("+");
					}
					else {
						printf("-");
					}
				}
				else if (j % (w + 1) == 0) {
					printf("|");
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
