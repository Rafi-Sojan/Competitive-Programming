#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
const int MOD = 1e9 + 7;
 
int main() {
    int x;
    cin >> x;
    vector<long long> dp(x + 1);
    
    dp[0] = 1;
    
    for(int i = 1; i <= x; i++) {
        for (int j = 1; j <= 6; j++) {
            if(i - j >= 0) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }
    
    cout << dp[x] << endl;
}