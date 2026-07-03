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
#define rr long long
 
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
       for(int j = 0; j < n; j++) {
          cout << (i ^ j);
          if (j < n - 1)
          cout << " ";
       }
       cout << "\n";
    }
    return 0;
}