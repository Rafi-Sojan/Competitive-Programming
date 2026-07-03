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
	cout << n << " ";
	while(n > 1) {
	    if(n % 2 == 0)
	    n /= 2;
	    else {
	        n = (n * 3) + 1;
	    }
	    cout << n << " ";
	}
	cout << "\n";
}