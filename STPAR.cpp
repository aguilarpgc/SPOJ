#include <iostream>

using namespace std;

int main(){
	int n;
	bool truck, next;
	scanf("%d", &n);
	
	while (n){
		int m[n];
		truck = true;

		for (int i = 0; i < n; ++i){
			scanf("%d", &m[i]);
		}
		for (int i = 0; i < n; ++i){
			next = true;

			for (int j = i; j < n; ++j){

				if (!next) {
					if (m[i] > m[j]) {
						truck = false;
						break;
					}
				}
				if (m[i] < m[j]){
					next = false;
				}
			}
		}

		if (truck) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
		scanf("%d", &n);
	}
	return 0;
}