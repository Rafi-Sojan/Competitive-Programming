#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> a;
    
    for(int i = 1; i <= n; i++)
    a.push(i);
    
    while(!a.empty()) {
        a.push(a.front());
        a.pop();
        
        cout << a.front() << " ";
        a.pop();
    }
    
}