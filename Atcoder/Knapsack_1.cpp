#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <map>
using namespace std;
#define ll long long

int main() {
    ll n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> items(n);
    for(int i = 0; i < n; i++) {
        cin >> items[i].first >> items[i].second;
    }
    
    vector<ll> dp(w + 1, 0);
    for(auto [w1, v] : items) {
        for(int j = w; j >= w1; j--) { 
        dp[j] = max(dp[j], dp[j - w1] + v);
        }
    }
    
    cout << dp[w] << endl;
}
