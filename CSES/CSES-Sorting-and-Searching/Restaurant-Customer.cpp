#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <cmath>
#include <vector>
#include <string>
#include <set>
using namespace std;
const int MOD = 1e9;
#define ll long long

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for(int i = 0; i < n; i++) {
	 cin >> a[i] >> b[i];
	}
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	int cus = 0;
	int ans = 0;
	int i = 0;
	int j = 0;
	while(i < n && j < n){
        if(a[i] < b[j]){
            cus++;
            ans = max(ans, cus);
            i++;
        } else {
            cus--;
            j++;
        }
    }
    
    cout << ans << endl;
}