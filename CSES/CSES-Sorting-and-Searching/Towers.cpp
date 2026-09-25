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
 
int main() {
    int n;
    cin >> n;

    multiset<int> tower;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        auto it = tower.upper_bound(x);

        if(it != tower.end()) {
            tower.erase(it);
        }

        tower.insert(x);
    }

    cout << tower.size() << endl;
}