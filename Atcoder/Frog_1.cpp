#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <map>
using namespace std;
 
int main() {
	int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n + 1, 0);
    for(int i = 0; i < n; i++)
    cin >> a[i];
    

    dp[1] = abs(a[0] - a[1]);
    for(int i = 2; i < n; i++) {
        dp[i] = min(dp[i - 1] + abs(a[i - 1] - a[i]), dp[i - 2] + abs(a[i - 2] - a[i])); 
    }

    cout << dp[n - 1] << endl;
}