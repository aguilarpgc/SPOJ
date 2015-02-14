#include <iostream>

using namespace std;

int main() {

	int n,m,i,sum1 = 0,sum2 = 0;

	cin >> n;
	int n_seq[n];

	for (i = 0; i < n; i++){
		cin >> n_seq[i];
		sum1 += n_seq[i];
	}

	cin >> m;
	int m_seq[m];

	for (i = 0; i < m; i++){
		cin >> m_seq[i];
		sum2 += m_seq[i];
	}

	if (sum2 * n < sum1 * m) {
		for (i = 0; i < n; i++) {
			cout << n_seq[i] << " ";
		}
	}
	else {
		for (i = 0; i < m; i++) {
			cout << m_seq[i] << " ";
		}
	}

	return 0;
}
