#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    vector<vector<int>> switches(m);
    vector<int> p(m);
    for(int i = 0; i < m; i++) {
        int k; cin >> k;
        for(int j = 0; j < k; j++) {
            int s; cin >> s;
            switches[i].push_back(s-1);
        }
    }

    for(int i = 0; i < m; i++) cin >> p[i];

    for(int bit = 0; bit < 1 << n; bit++) {
        int cntd = 0;
        for(int k = 0; k < m; k++) {
            int cnts = 0;
            for(auto i : switches[k]) {
                if(bit & (1 << i)) {
                    cnts++;
                }
            }
            if(cnts%2 == p[k]) cntd++;
        }
        if(cntd == m) ans++;
    }
    cout << ans << endl;
}