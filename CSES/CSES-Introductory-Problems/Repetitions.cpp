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
    string s;
    cin >> s;
 
    int len = 1, count = 1;
 
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1])
        count++;
        else
        count = 1;
        if (count > len)
        len = count;
    }
    cout << len << endl;
    return 0;
}