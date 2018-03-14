#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int n, x, y;
    cin >> n;
    
    while(n--) {
        cin >> x >> y;
        
        if (y == 0) {
            
            int result = pow((x % 10),0);
            printf("%d\n", result);
        }
        else {
            
            int module = y % 4;
            int exponent = (module == 0) ? 4 : module;
            int result = pow((x % 10), exponent);
            printf("%d\n", result % 10);
        }
    }
    return 0;
}

