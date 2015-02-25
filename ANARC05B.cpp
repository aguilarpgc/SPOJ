#include <algorithm>
#include <iostream>
#define MAX 10000

using namespace std;

int main(){
	int n1,n2,tot,sum1,sum2,i,j;
	int A[MAX], B[MAX];

	scanf("%d",&n1);
	while(n1) {
		tot = 0, sum1 = 0, sum2 = 0;

		for (int i = 0; i < n1; ++i){
			scanf("%d",&A[i]);
		}

		scanf("%d",&n2);
		for (int i = 0; i < n2; ++i){
			scanf("%d",&B[i]);
		}

		i = 0; j = 0;
		while(i < n1 && j < n2){
			if (A[i] == B[j]){
				tot+= max(sum1, sum2) + A[i];
				sum1 = 0, sum2 = 0;
				i++;j++;
			}
			else if (A[i] > B[j]){
				sum2 += B[j++];
			}
			else {				
				sum1 += A[i++];
			}
		}

		for (;i < n1;){
			sum1 += A[i++];
		}
		for (;j < n2;){
			sum2 += B[j++];
		}

		tot += max(sum1, sum2);

		printf("%d\n",tot);
		scanf("%d",&n1);
	}
	return 0;
}