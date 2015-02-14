#include <iostream>

using namespace std;

int main(){

	int t, n, c;
	long long a, b, d, x;
	scanf("%d",&t);

	while (t--){
		scanf("%lld %lld %lld", &a, &b, &d);
		n = (d / (double)(a + b)) * 2;
		c = (b - a) / (n - 5);
		x = a - (c << 1);

		printf("%d\n%lld",n, x);
		for (int i = 1; i < n; ++i){
			printf(" %lld", x+=c);
		}
		printf("\n");
	}

	return 0;
}