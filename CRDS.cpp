#include <iostream>

using namespace std;

int main(){
	int t;
	long long int n, cards;

	scanf("%d", &t);
	while (t--){
		scanf("%lld", &n);
		cards = (3 * n * n + n) >> 1;
		cards %= 1000007;
		printf("%lld\n", cards);
	}

	return 0;
}