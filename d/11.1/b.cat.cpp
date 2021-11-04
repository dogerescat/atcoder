#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

void dfs(Graph &G, vector<int> &dist, int v, int cnt) {
    dist[v] = 1;
    if(cnt == 2) return;
    for(auto i : G[v]) {
        if(dist[i]) continue;
        dfs(G, dist, i, cnt+1);
    }
}

int main() {
    int n, m; cin >> n >> m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> dist(n);
    dfs(G, dist, 0, 0);
    if(dist[n-1]) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;
}