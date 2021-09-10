#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

const int INF = 1000000007;

void ts(Graph &G, vector<int> &order ,vector<bool> &seen, int n, int v) {
    seen[v] = true;
    for(auto next_v : G[v]) {
        if(seen[next_v]) continue;
        ts(G, order, seen, n, next_v);
    }
    order.push_back(v);
}

int main() {
    int n, m, a, b; cin >> n >> a >> b >> m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        G[x-1].push_back(y-1);
        // G[y-1].push_back(x-1);
    }
    vector<int> order;
    vector<bool> seen(n);
    for(int i = 0; i < n; i++) {
        if(seen[i]) continue;
        ts(G, order, seen, n, i);
    }
    reverse(order.begin(), order.end());
    vector<vector<pair<int, int>>> dp(n);
    dp[0][0].first = 0;
    dp[0][0].second = 1;
    for(int i = 0; i < n; i++) {
        
    }

}