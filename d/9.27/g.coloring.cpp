#include <bits/stdc++.h>
using namespace std;
struct  Edge {
    int to, id;
    Edge(int _to, int _id) { 
        to = _to; id = _id;
    }
};
typedef vector<vector<Edge>> Graph;


void dfs(Graph &G, vector<int> &ans, int v, int c = -1, int p = -1) {
    int k = 1;
    for(auto i : G[v]) {
        int u = i.to, ei = i.id;
        if(u == p) continue;
        if(k == c) k++;
        ans[ei] = k;
        k++;
        dfs(G, ans, u, ans[ei], v);
    }
}

int main() {
    int n; cin >> n;
    Graph G(n);
    for(int i = 0; i < n-1; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(Edge(b-1, i));
        G[b-1].push_back(Edge(a-1, i));
    }
    vector<int> ans(n);
    dfs(G, ans, 0);
    int mx = 0;
    for(int i = 0; i < n; i++) mx = max(mx, int(G[i].size()));
    cout << mx << endl;
    for(int i = 0; i < n-1; i++) {
        cout << ans[i] << endl;
    }
}