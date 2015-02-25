#include <iostream>

using namespace std;

int main(){
	int t, n, row, result;
	char A[4]= {'W','M','A','W'};
	char B[4]= {'W','A','M','W'};
	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);
		if (n == 1){
			printf("poor conductor\n");
		}
		else {
			row = (n + 3) / 5;
			result = (n + 3) % 5;

			if (row % 2 == 0){
				if (result < 3) {
					printf("%d %c R\n",row, A[result]);
				}
				else {
					printf("%d %c L\n",row, A[result-1]);
				}
			}
			else {
				if (result < 2) {
					printf("%d %c L\n",row, B[result]);
				}
				else {
					printf("%d %c R\n",row, B[result-1]);
				}
			}
		}
	}

	return 0;
}