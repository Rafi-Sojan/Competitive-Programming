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
    int n, m;
    cin >> n >> m;
    multiset<int> h;
    for(int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        h.insert(x);
    }
 
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        
        auto it = h.upper_bound(x);
        if(it == h.begin()) {
            cout << - 1 << endl;
        } else {
            it--;
            cout << *it << endl;
            h.erase(it);
        }
    }
}