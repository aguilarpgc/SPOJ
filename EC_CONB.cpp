#include <iostream>

long long convert_invert_binary_even(long long n) {
	if (n % 2 == 1) {
		return n;
	}

	long long invert = 0;

	while (n >= 1) {
		invert *= 2;
		invert += (n % 2); 
		n /= 2;
	}

	return invert;
}

int main() {
	int n;
	long long val;
	scanf("%d", &n);
	while(n--) {
		scanf("%lld", &val);
		printf("%lld\n", convert_invert_binary_even(val));
	}
	return 0;
}