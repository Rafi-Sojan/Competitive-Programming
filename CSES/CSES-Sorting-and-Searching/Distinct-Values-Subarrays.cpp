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
    for(int i = 0; i < n; i++)
    cin >> a[i];
 
    set<int> s;
    long long ans = 0;
    int l = 0;
 
    for(int r = 0; r < n; r++) {
        while(s.count(a[r])) {
            s.erase(a[l]);
            l++;
        }
        
        s.insert(a[r]);
 
        ans += (r - l + 1);
    }
    cout << ans << endl;
}