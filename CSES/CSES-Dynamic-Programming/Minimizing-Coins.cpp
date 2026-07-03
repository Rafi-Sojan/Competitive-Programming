#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
const int MOD = 1e9 + 7;
const int INF = 1e9;
 
int main() {
    int n, x;
    cin >> n >> x;
    vector<long long> dp(x + 1, INF);
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    dp[0] = 0;
    
    for(int i = 1; i <= x; i++) {
        for(int j = 0; j < n; j++) {
            if(i - a[j] >= 0) {
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
    }
    
    if(dp[x] == INF)
    cout << -1 << endl;
    else
    cout << dp[x] << endl;
}