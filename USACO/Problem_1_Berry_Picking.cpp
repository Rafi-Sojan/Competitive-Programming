#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ifstream fin("berries.in");
    ofstream fout("berries.out");

    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for(int i = 0; i < n; i++)
    cin >> b[i];
    

    int baskets = k - (k / 2);
    sort(b.rbegin(), b.rend());
    for(int i = 0; i < n; i++) {
          
    }
}