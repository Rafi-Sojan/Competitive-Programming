#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    vector<int> c(3), m(3);
    for(int i = 0; i < 3; i++) {
        cin >> c[i] >> m[i];
    }

    for (int i = 0; i < 100; i++) {
        int from = i % 3;
        int to = (i + 1) % 3;

        int amount = min(m[from], c[to] - m[to]);

        m[from] -= amount;
        m[to] += amount;
    }

    for (int i = 0; i < 3; i++) {
        cout << m[i] << endl;
    }

    return  0;
}
