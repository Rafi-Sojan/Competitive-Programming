#include <bits/stdc++.h>
using namespace std;

int main() {
	// int t;
	// cin >> t;
	//while(t--) {
	   int l, n, rf, rb;
       cin >> l >> n >> rf >> rb;
       vector<int> x(n, 0);
       vector<int> c(n, 0);
       for(int i = 0; i < n; i++) {
        cin >> x[i] >> c[i];
       }

       vector<bool> good(n);
       int mx = 0;
       for (int i = n - 1; i >= 0; i--) {
        if(c[i] > mx) {
            good[i] = true;
            mx = c[i];
        }
       }

       int stops = 0;
       for(int i = 0; i < good.size(); i++) {
        stop += i + 1;
       }

       cout << stops << endl;
	// }
}
