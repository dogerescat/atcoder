#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

void dfs(Graph &G, vector<int> dist, int n, int v, int &ans, int deep = 0) {
    dist[v] = 1;
    if(deep == n-1) {
        bool ok = true;
        for(auto i: dist) {
            if(i != 1) ok = false;
        }
        if(ok) ans++;
        return;
    }
    for(auto i : G[v]) {
        if(dist[i] != -1) continue;
        dfs(G, dist, n, i, ans, deep+1);
    }
}

int main() {
    int n, m; cin >> n >> m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> dist(n, -1);
    int ans = 0;
    dfs(G, dist, n, 0, ans);
    cout << ans << endl;
}