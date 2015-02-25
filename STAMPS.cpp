#include <algorithm>
#include <functional>
#include <iostream>

#define MAX 1000

using namespace std;

int main(){

	int t,s,p,n,tot,i=1,j,A[MAX];

	scanf("%d",&t);
	while(t){
		tot = 0, j = 0;
		scanf("%d %d",&s, &p);
		for (int i = 0; i < p; ++i){
			scanf("%d",&A[i]);
		}

		sort(A,A+p,greater<int>());

		while(tot < s && j < p){
			tot+=A[j++];
		}

		if (tot >= s) {
			printf("Scenario #%d:\n%d\n", i++, j);
		}
		else {
			printf("Scenario #%d:\nimpossible\n", i++);
		}

		if (--t){
			printf("\n");
		}
	}

	return 0;
}