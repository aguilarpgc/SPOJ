#include <iostream>
#include <map>

using namespace std;

int main(){
	int t,n,key,candidate,count;
	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);
		map<int,int> aux;

		candidate = 0;
		count = 1;

		for (int i = 0; i < n; ++i){
			scanf("%d", &key);
			aux[key]++;

			if (candidate == key) {
				count++;
			}
			else if (--count == 0) {
				candidate = key;
				count++;	
			}
		}

		if (aux[candidate] << 1 > n) {
			printf("YES %d\n", candidate);
		}
		else {
			printf("NO\n");
		}
	}

	return 0;
}

// #include <iostream>

// using namespace std;

// int main(){
// 	int t,n,candidate,count;
// 	scanf("%d", &t);

// 	while (t--) {
// 		scanf("%d", &n);
// 		int aux[n];

// 		candidate = 0;
// 		count = 1;

// 		for (int i = 0; i < n; ++i){
// 			scanf("%d", &aux[i]);
// 			if (aux[i] == candidate) {
// 				count++;
// 			}
// 			else if (--count == 0) {
// 				candidate = aux[i];
// 				count++;	
// 			}
// 		}

// 		count = 0;
// 		for (int i = 0; i < n; ++i){
// 			if (aux[i] == candidate) {
// 				count++;
// 			}
// 		}

// 		if (count << 1 > n) {
// 			printf("YES %d\n", candidate);
// 		}
// 		else {
// 			printf("NO\n");
// 		}
// 	}

// 	return 0;
// }

