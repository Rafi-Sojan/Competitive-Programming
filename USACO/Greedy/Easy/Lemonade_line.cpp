#include <bits/stdc++.h>
using namespace std;

int main() {
	// int t;
	// cin >> t;
	// while(t--) {
	    int n;
	    cin >> n;
	    vector<int> a(n, 0);
	    for(int i = 0; i < n; i++)
	    cin >> a[i];
	    
	    sort(a.rbegin(), a.rend());
	    int cows = 0;
	    for(int i = 0; i < n; i++) {
	        if(cows <= a[i]) {
	            cows++;
	        }
	    }
	    
	    cout << cows << endl;
	// }
}
