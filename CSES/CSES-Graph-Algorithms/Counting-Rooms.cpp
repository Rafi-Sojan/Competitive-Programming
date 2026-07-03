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
 
int n, m;
char grid[1005][1005];
 
vector<int> pos_i = {-1, 1, 0, 0};
vector<int> pos_j = {0, 0, -1, 1};
 
void dfs(int u, int v) {
    grid[u][v] = '#';
    for(int i = 0; i < 4; i++) {
        int dx = u + pos_i[i];
        int dy = v + pos_j[i];
        if(dx >= 0 && dx < n && dy >= 0 && dy < m && grid[dx][dy] == '.')
        dfs(dx, dy);
    }
}
 
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cin >> grid[i][j];
      }
    }
 
    int rooms = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == '.') {
                dfs(i, j);
                rooms++;
            }
        }
    }
 
    cout << rooms << endl;
}