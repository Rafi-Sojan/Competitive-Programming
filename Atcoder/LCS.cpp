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
    string s;
    cin >> s;
    string t;
    cin >> t;
    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(s[i] == t[j]) {
               dp[i + 1][j + 1] = dp[i][j] + 1; 
            } else {
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
    }

    string r;
    int i = n;
    int j = m; 
    while(i > 0 && j > 0) {
        if(dp[i][j] == dp[i - 1][j]) {
            i--; 
        } else if (dp[i][j] == dp[i][j - 1]) {
            j--;
        } else {
            r += s[i - 1];
            i--;
            j--;
        }
    }
    reverse(r.begin(), r.end());
    cout << r << endl;
}