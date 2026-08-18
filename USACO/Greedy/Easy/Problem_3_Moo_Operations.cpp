#include <iostream>
#include <map>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        int count_m = 0;
        int count_o = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'M')
            count_m++;
            else
            count_o++;
        }
        
        cout << n - 2 * min(count_o / 2, count_m) << endl;
    }
}