#include <iostream>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int A[n][n];

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			scanf("%d", &A[i][j]);
		}
	}
	if (n > 2) {
		int a = (A[0][2] - A[1][2] + A[0][1]) / 2;

		printf("%d ", a);
		for (int k = 1; k < n - 1; k++){
			printf("%d ", A[0][k] - a);
		}
		printf("%d\n",A[0][n-1] - a);
	}
	else {
		int a = A[0][1] / 2;
		printf("%d %d\n", a, a);
	}
	return 0;
}