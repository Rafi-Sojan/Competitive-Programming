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
    vector<int> pos(n + 1);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }
 
    int rounds = 1;
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) {
            rounds++;
        }
    }
    cout << rounds << endl;
}