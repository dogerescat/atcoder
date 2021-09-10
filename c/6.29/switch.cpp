#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> s(m);
    vector<int> p(m);
    for(int i = 0; i < m; i++) {
        int k; cin >> k;
        for(int j = 0; j < k; j++) {
            int x; cin >> x;
            s[i].push_back(x-1);
        }
    }
    for(int i = 0; i < m; i++) cin >> p[i];

    int ans = 0;

    for(int bit = 0; bit < 1 << n; bit++) {
        int cnt1 = 0;
        for(int i = 0; i < m; i++) {
            int cnt2 = 0;
            for(auto j : s[i]) {
                if(bit & 1 << j) {
                    cnt2++;
                }
            }
            if(cnt2 % 2 == p[i]) cnt1++;
        }
        if(cnt1 == m) ans++;
    }
    cout << ans << endl;
}