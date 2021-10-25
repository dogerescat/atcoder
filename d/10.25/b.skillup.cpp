#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;
int main() {
    int n, m, x; cin >> n >> m >> x;
    vector<vector<int>> a(n+1, vector<int> (m+1));
    for(int i = 0; i < n; i++) for(int j = 0; j <= m; j++) cin >> a[i][j];
    int ans = INF;
    for(int bit = 0; bit < 1 << n; bit++) {
        vector<int> b(m);
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(bit & 1 << i) {
                cnt += a[i][0];
                for(int j = 0; j < m; j++) {
                    b[j] += a[i][j+1];
                }
            }
        }
        bool flag = true;
        for(int i = 0; i < m; i++) {
            if(b[i] < x) flag = false;
        }
        if(flag) ans = min(ans, cnt);
    }
    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}