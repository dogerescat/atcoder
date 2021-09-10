#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &G, vector<bool> &t, int i) {
    if(t[i]) return;
    t[i] = true;
    for(auto j : G[i]) {
        dfs(G, t, j);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n);
    for(int i = 0; i < m; i++) {
        int A, B; cin >> A >> B;
        a[A-1].push_back(B-1);
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        vector<bool> t(n, false);
        dfs(a, t, i);
        for(int j = 0; j < n; j++) if(t[j]) ans++;
    }
    cout << ans << endl;
}