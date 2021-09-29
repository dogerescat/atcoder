#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

void dfs(Graph &G, vector<int> &ans, vector<bool> &dist, int v, int p=-1) {
    dist[v] = true;
    for(auto i : G[v]) {
        if(dist[i] || i == p) continue;
        ans[i] += ans[v]; 
        dfs(G, ans, dist, i, v);
    }
}

int main() {
    int n, q; cin >> n >> q;
    Graph G(n);
    for(int i = 0; i < n-1; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    vector<int> ans(n);
    for(int i = 0; i < q; i++) {
        int p, x; cin >> p >> x;
        ans[p-1] += x;
    }
    vector<bool> dist(n);
    dfs(G, ans, dist, 0);
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}