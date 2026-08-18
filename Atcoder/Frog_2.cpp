#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <map>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    vector<int> dp(n + 1, 0);
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    for(int i = 1; i < n; i++) {
        dp[i] = INT_MAX;
        for(int j = max(i - k, 0); j < i; j++) {
            dp[i] = min(dp[i], dp[j] + abs(a[j] - a[i]));
        }
    }

    cout << dp[n - 1] << endl;
    
}