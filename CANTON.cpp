#include <iostream>

using namespace std;

int main() {
	int t, n, u, d;
	cin >> t;

	while (t--) {
		cin >> n;

		u = d = 1;
		for (int i = 1; i < n ; ++i){
			if (u == 1){
				if(d % 2) {
					d++;
				}
				else {
					u++; d--;
				}
			}
			else if (d == 1){
				if (u % 2){
					u--; d++;
				}
				else {
					u++;
				}
			}
			else if((d + u) % 2){
				u++;d--;
			}
			else {
				u--;d++;
			}
		}
		printf("TERM %d IS %d/%d\n", n, u, d);
	}

	return 0;
}