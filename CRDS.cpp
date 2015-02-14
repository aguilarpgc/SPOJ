#include <iostream>

using namespace std;

int main(){
	int t, n;

	scanf("%d", &t);
	while (t--){
		scanf("%d", &n);
		printf("%d\n", ((3 * n * n) + n) >> 1);
	}

	return 0;
}