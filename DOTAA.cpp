#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, heroes, towers, damage;
	scanf("%d", &n);

	while(n--) {
		scanf("%d %d %d", &heroes, &towers, &damage);

		vector<int> heroes_health(heroes);
		for (int i = 0; i < heroes; ++i){
			scanf("%d", &heroes_health[i]);
		}
		sort(heroes_health.begin(), heroes_health.end(), greater<int>());

		bool alives = true;
		int index = 0;

		while(towers && alives) {

			if (heroes_health[index] > damage) {
				heroes_health[index] -= damage;
				towers -= 1;
			}
			else {
				index++;
			}

			if (index == heroes) {
				alives = false;
			}
		}

		printf("%s\n", (alives ?  "YES": "NO"));
	}
}
