#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
#define ll long long

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    ll cost = k + 1;
    ll day = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] - day < k + 1) {
            cost += a[i] - day;
        } else {
            cost += k + 1;
        }
        day = a[i];
    }
    
    cout << cost << endl;
}