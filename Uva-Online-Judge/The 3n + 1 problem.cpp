#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long calc(long long d) {
    long long length = 1;
    while (d != 1) {
        if (d % 2)
            d = 3 * d + 1;
        else
            d /= 2;

        length++;
    }
    return length;
}

int main() {
	// int t;
	// cin >> t;
	// while(t--) {
	    long long i, j;
	    cin >> i >> j;
	    long long l = min(i , j);
	    long long r = max(i , j);
	    long long len = 0;
	    for(int i = l; i <= r; i++) {
	        len = max(len, calc(i));
	    }
	    
	    cout << i << " " << j << " " << len << endl;
	// }
}
