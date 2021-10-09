#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct Edge {
    int to;
    ll weight;
    Edge(int t, ll w) : to(t), weight(w) {}
};
using Graph = vector<vector<Edge>>;

void dfs(Graph &G, vector<ll> &dist, int v, ll d) {
    for(auto i : G[v]) {
        if(dist[i.to] != -1) continue;
        dist[i.to] = d + i.weight;
        dfs(G, dist, i.to, d + i.weight);
    }
}

int main() {
    int n, q, k; cin >> n;
    Graph G(n+1);
    for(int i = 0; i < n-1; i++) {
        int a, b; ll c; cin >> a >> b >> c;
        G[a].push_back(Edge(b, c));
        G[b].push_back(Edge(a, c));
    }
    cin >> q >> k;
    vector<ll> dist(n+1, -1);
    dist[k] = 0;
    dfs(G, dist, k, 0);
    for(int i = 0; i < q; i++) {
        int x, y; cin >> x >> y;
        ll ans = dist[x] + dist[y];
        cout << ans << endl;
    }
}