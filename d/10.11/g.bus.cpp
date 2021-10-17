#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n,vector<int>(n, INF));
    for(int i = 0; i < m; i++) {
        int x, y, t; cin >> x >> y >> t;
        --x, --y;
        a[x][y] = t;
        a[y][x] = t;
    }
    for(int i = 0; i < n; i++) a[i][i] = 0;
    for(int k = 0; k < n; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            b[i] = max(b[i], a[i][j]);
        }
    }
    int ans = 1001001001;
    for(int i = 0; i < n; i++) {
        ans = min(ans, b[i]);
    }
    cout << ans << endl;
}