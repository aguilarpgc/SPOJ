#include <iostream>
#include <map>

using namespace std;

int main() {
	// f    : friends
	// ff   : friends friends
	// n_ff : # friends friends
	map<int,int> ff;

	int n, n_ff, k_ff, total;
	scanf("%d", &n);
	int f[n];

	for (int i = 0; i < n; i++){
		scanf("%d", &f[i]);
		scanf("%d", &n_ff);

		while(n_ff--) {
			scanf("%d", &k_ff);
			ff[k_ff] = 1;
		}
	}

	total = ff.size();
	for (int i = 0; i < n; i++) {
		if (ff[f[i]] == 1) {
			total--;
		}
	}
	cout << total << endl;
	return 0;
}