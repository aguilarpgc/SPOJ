#include <iostream>

using namespace std;

int main() {

	int t;
	int l,c,s;
	cin >> t;

	int h, w;

	while (t--) {
		cin >> l >> c >> s;

		h = 1 + (s + 1) * l;
		w = 1 + (s + 1) * c;

		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){

				if (i % (s + 1) == 0 || j % (s + 1)== 0) {
					printf("*");
				}
				else {
					if ((i + j) % s == 0) {
						printf("/");
					}
					else {
						printf(".");
					}
				}

			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}
