#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

void dfs(Graph &G, vector<int> &dist, int v, int &cnt) {
    cnt++;
    for(auto i : G[v]) {
        if(dist[i] != -1) continue;
        dist[i] = 1;
        dfs(G, dist, i, cnt);
    } 
}

int main() {
    int n, m; cin >> n >> m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        vector<int> dist(n, -1);
        int cnt = 0;
        dist[i] = 1;
        dfs(G, dist, i, cnt);
        ans += cnt;
    }
    cout << ans << endl;
}