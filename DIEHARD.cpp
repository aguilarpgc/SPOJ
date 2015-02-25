#include <algorithm>
#include <iostream>
#define MAX 1000
#define NIL -1

using namespace std;

int DIEHARD[MAX][MAX];

void initial()
{
  int i,j;
  for (i = 0; i < MAX; i++) {
	  for (j = 0; j < MAX; j++) {
	    DIEHARD[i][j] = NIL;
	  }
	}
}

int diehard_steps(int h, int a){

	if (h <= 0 || a <= 0) {
		return 0;
	}

	if (DIEHARD[h-1][a-1] != NIL) {
		return DIEHARD[h-1][a-1];
	}
	// Water
	// + 3 - 5, + 2 - 10 = - 2, - 8

	// Fire
	// + 3 - 20, + 2 + 5 = - 17, + 7

	DIEHARD[h-1][a-1] = max(1 + diehard_steps(h - 2, a - 8), 
		1 + diehard_steps(h - 17, a + 7));

	return DIEHARD[h-1][a-1];
}

int main(){
	int t, h, a;
	initial();
	scanf("%d", &t);

	while(t--){
		scanf("%d %d", &h, &a);
		printf("%d\n", diehard_steps(h, a) * 2 - 1);
	}

	return 0;
}