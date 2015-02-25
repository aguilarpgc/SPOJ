#include <iostream>

using namespace std;

int main(){
	int t,j;
	// HHH, HHT, HTH, HTT, THH, THT, TTH, TTT
	int x;
	scanf("%d",&t);

	while(t--){
		scanf("%d",&j);

		char s[40];
		scanf("%s",s);
		// HHH, HHT, HTH, HTT, THH, THT, TTH, TTT
		int A[8] = {0,0,0,0,0,0,0,0};

		if(s[0] == 'H') {
			if (s[1] == 'H') x = 0;
			else x = 2;
		}
		else {
			if (s[1] == 'H') x = 4;
			else x = 6;
		}

		for (int i = 2; i < 40; ++i){
			if (s[i] == 'H'){
				A[x]++;
				if (x == 0 || x == 4)
					x = 0;
				else
					x = 4;
			}
			else {
				A[x+1]++;
				if (x == 0 || x == 4)
					x = 2;
				else
					x = 6;
			}
		}

		printf("%d %d %d %d %d %d %d %d %d\n",j,A[7],A[6],A[5],A[4],A[3],A[2],A[1],A[0]);
	}

	return 0;
}