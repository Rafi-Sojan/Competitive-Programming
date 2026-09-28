#include <bits/stdc++.h>
using namespace std;

int main() {
	// int t;
	// cin >> t;
	// while(t--) {
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    
	    int photos = 0;
	    for(int i = 0; i < n; i++) {
	        int sum = 0;
	        for(int j = i; j < n; j++) {
	            sum += a[j];
	            
	            int len = j - i + 1;
	            
	            if(sum % len != 0)
	            continue;
	            
	            int average = sum / len;
	            
	            for(int k = i; k <= j; k++) {
	                if (a[k] == average) {
	                    photos++;
	                    break;
	                }
	            }
	        }
 	    }
 	    
 	    cout << photos << endl;
	// }
}
