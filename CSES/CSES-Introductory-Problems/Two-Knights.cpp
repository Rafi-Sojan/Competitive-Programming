#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <cmath>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        long long k = i * i;
        long long moves = k * (k - 1) / 2;
        long long attacks = 0;

        if(k >= 3) {
            attacks = 4 * (k - 1) * (k - 2);
        }

        cout << moves - attacks << endl;
    }
}