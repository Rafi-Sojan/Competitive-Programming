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
    int n, x;
    cin >> n >> x;
 
    vector<int> a(n);
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    map<int, int> mp;
 
    for(int i = 0; i < n; i++) {
        int need = x - a[i];
 
        if(mp.count(need)) {
            cout << mp[need] + 1 << " " << i + 1 << endl;
            return 0;
        }
 
        mp[a[i]] = i;
    }
 
    cout << "IMPOSSIBLE" << endl;
}