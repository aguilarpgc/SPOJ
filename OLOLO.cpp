#include <iostream>

using namespace std;

int main(){
	int n, aux = 0, num;
	scanf("%d",&n);

	while (n--){
		scanf("%d",&num);
		aux ^= num;
	}
	printf("%d\n", aux);

	return 0;
}