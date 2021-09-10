#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    vector<vector<int>> G(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        bool ok = true;
        for(auto j : G[i]) {
            if(h[i] <= h[j]) ok = false;
        }
        if(ok) cnt++;
    }
    cout << cnt << endl;
}