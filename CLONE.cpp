#include <iostream>
#include <map>

using namespace std;

int main(){
	int n, m, j;
	scanf("%d %d", &n, &m);

	while(n != 0 && m != 0){
		map<string, int> CLONES;
		string nda;
		j = n;

		int A[n];
		for (int i = 0; i < n; ++i){
			A[i] = 0;
		}

		while(n--){		
			cin >> nda;
			CLONES[nda]++;
		}

		for (map<string, int>::iterator it=CLONES.begin(); it != CLONES.end(); it++) {
			++A[it->second - 1];
		}

		for (int i = 0; i < j; ++i){
			printf("%d\n", A[i]);
		}

		scanf("%d %d", &n, &m);		
	}

	return 0;
}