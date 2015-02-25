#include <iostream>

using namespace std;

int main() {

	int n;
	int l,c,h,w;
	cin >> n;

	while (n--) {
		cin >> l >> c >> h >> w;

		for (int i = 0; i < ((h + 1) * l + 1); i++){
			for (int j = 0; j < ((w + 1) * c + 1); j++){
				if (j % (w + 1) == 0 || i % (h + 1) == 0){
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