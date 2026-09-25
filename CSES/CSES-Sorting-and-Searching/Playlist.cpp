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
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    set<int> s;
    int j = 0;
    int lcs = 0;
    for(int i = 0; i < n; i++) {
        while(s.count(a[i])) {
            s.erase(a[j]);
            j++;
        }

        s.insert(a[i]);
        lcs = max(lcs, i - j + 1);
    }

    cout << lcs << endl;
}