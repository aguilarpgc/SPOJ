#include <iostream>

using namespace std;

int mcd(int a, int b){
	if (b == 0){
		return a;
	}
	else {
		return mcd(b, a % b);
	}
}

int main(){
	int t,a,b,x;
	scanf("%d",&t);

	while (t--){
	  scanf("%d %d",&a, &b);
	  x = mcd(a,b);
	  printf("%d %d\n",b / x, a / x);
	}

	return 0;
}
