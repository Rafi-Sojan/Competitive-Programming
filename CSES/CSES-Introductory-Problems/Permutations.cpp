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

    if(n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    } else {
        for(int i = 2; i <= n; i += 2)
        cout << i << " ";
        for(int i = 1; i <= n; i += 2)
        cout << i << " ";
        cout << endl;
    }
    
    return 0;
}