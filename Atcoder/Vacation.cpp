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
    int n;
    cin >> n;
    
    vector<int> dp(3, 0);
    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        vector<int> ndp(3);

        ndp[0] = a + max(dp[1], dp[2]);
        ndp[1] = b + max(dp[0], dp[2]);
        ndp[2] = c + max(dp[0], dp[1]);

        dp = ndp;
    }

    cout << max({dp[0], dp[1], dp[2]}) << endl;
}