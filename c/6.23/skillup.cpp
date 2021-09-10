#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> a(n, vector<int>(m+1));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m+1; j++) {
            cin >> a[i][j];
        }
    }
    int ans = INF;
    for(int bit = 0; bit < 1 << n; bit++) {
        int money = 0;
        vector<int> b(m, 0);
        for(int i = 0; i < n; i++) {
            if(bit & 1 << i) {
                money += a[i][0];
                for(int j = 1; j < m+1; j++) {
                    b[j-1] += a[i][j];
                }
            }
        }
        bool ok = true;
        for(int j = 0; j < m; j++) {
            if(b[j] < x) ok = false;
        }
        if(ok) ans = min(ans, money);
    }
    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}