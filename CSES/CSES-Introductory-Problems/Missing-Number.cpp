#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
 
int main() {
    ll n;
    cin >> n;
    vector<int> a(n);
 
    ll sum = (n * (n + 1)) / 2;
    ll array_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        array_sum += a[i];
    }
    
    cout << sum - array_sum << endl;
}