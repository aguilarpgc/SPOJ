#include <iostream>
#include "math.h"

using namespace std;

int main() {

	int t,s;
	cin >> t;

	while (t--) {

		cin >> s;

		for (int i = 0; i < s; ++i){
			for (int j = 0; j < s; ++j){

				if (i + j < s) {
					if (i > j) {
						if (j % 2 == 0) {
							printf("*");
						}
						else {
							printf(".");
						}
					}
					else {
						if (i % 2 == 0) {
							printf("*");
						}
						else {
							printf(".");
						}
					}
				}
				else {
					if (i > j) {
						if (i % 2 == 0) {
							printf("*");
						}
						else {
							printf(".");
						}
					}
					else {
						if (j % 2 == 0) {
							printf("*");
						}
						else {
							printf(".");
						}
					}
				}
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}