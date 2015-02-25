// #include <iostream>

// using namespace std;

// int main() {

// 	int n,sum;
// 	cin >> n;

// 	while (n) {
// 		n++;
// 		sum = (n * n);
		
// 		for (int i = 1; i < n; ++i){
// 			sum += i;
// 		}

// 		cout << sum << endl;
// 		cin >> n;
// 	}

// 	return 0;
// }
// Second
#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	while (n) {
		n++;
		cout << ((3 * (n * n) - n)/ 2) << endl;
		cin >> n;
	}

	return 0;
}
