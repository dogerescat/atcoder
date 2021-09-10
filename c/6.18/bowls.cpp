#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m;
    vector<pair<int, int>> a(m);
    for(int i = 0; i < m; i++) {
        cin >> a[i].first >> a[i].second;
    }
    cin >> k;
    vector<pair<int, int>> c(k);
    for(int i = 0; i < k; i++) {
        cin >> c[i].first >> c[i].second;
    }
    int ans = 0;
    for(int bit = 0; bit < 1 << k; bit++) {
        vector<bool> sa(n, false);
        int cnt = 0;
        for(int i = 0; i < k; i++) {
            if(bit & 1 << i) {
                sa[c[i].first-1] = true;
            } else {
                sa[c[i].second-1] = true;
            }
        }
        for(int i = 0; i < m; i++) {
            if(sa[a[i].first-1] && sa[a[i].second-1]) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}