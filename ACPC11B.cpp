#include <algorithm>
#include <iostream>
#include <stdlib.h>

using namespace std;

void merge(int a[], int low, int mid, int high) {
	int * b = new int[high+1-low];
	int h,i,j,k;
	h = low;
	i = 0;
	j = mid + 1;

	while((h <= mid) && (j <= high)) {
		if (a[h] <= a[j]) {
			b[i] = a[h++];
			// h++;
		}
		else {
			b[i] = a[j++];
			// j++;
		}
		i++;
	}

	if (h > mid) {
		for(k=j; k<=high; k++){
			b[i++] = a[k];
			// i++;
		}
	}
	else {
		for (k=h; k<=mid; k++) {
			b[i++] = a[k];
			// i++;
		}
	}

	for (k=0; k<=high-low; k++) {
		a[k+low] = b[k];
	}
	delete[] b;
}
 
void merge_sort(int a[], const int low, const int high) {
	int mid;
	if (low < high) {
		mid = (low + high) / 2;
		merge_sort(a, low, mid);
		merge_sort(a, mid + 1, high);
		merge(a, low, mid, high);
	}
}

int main() {
	int t, n1, n2, minimun;
	scanf("%d", &t);

	while(t--){
		// M1
		scanf("%d", &n1);
		int M1[n1];
		for (int i = 0; i < n1; i++){
			scanf("%d", &M1[i]);
		}
		merge_sort(M1, 0, n1 - 1);
		// M2
		scanf("%d", &n2);
		int M2[n2];
		for (int j = 0; j < n2; j++){
			scanf("%d", &M2[j]);
		}

		merge_sort(M2, 0, n2 - 1);

		minimun = abs(M1[0] - M2[0]);
		int i = 0, j = 0;
		while(i < n1 && j < n2){
			minimun = min(abs(M1[i] - M2[j]), minimun);
			if (minimun == 0) {
				break;
			}

			if (M1[i] < M2[j]){
				i++;
			}
			else {
				j++;
			}
		}

		printf("%d\n", minimun);
	}

	return 0;
}