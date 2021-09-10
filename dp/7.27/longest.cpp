#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

void ts(Graph &G, vector<bool> &seen, vector<int> &order ,int v) {
    seen[v] = true;
    for(auto next_v : G[v]) {
        if(seen[next_v]) continue;
        ts(G, seen, order, next_v);
    }
    order.push_back(v);
}

int main() {
    int n, m; cin >> n >> m;
    Graph G(n, vector<int>());
    vector<bool> seen(n);
    vector<int> order;
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
    }
    for(int v = 0; v < n; v++) {
        if(seen[v]) continue;
        ts(G, seen, order, v);
    }
    vector<int> dp(n);
    for(int i = 0; i < n; i++) {
        int res = 0;
        for(int j = 0; j < G[order[i]].size(); j++) {
            chmax(res, dp[G[order[i]][j]]+ 1);
        }
        dp[order[i]] = res;
    }
    int ans = 0;
    for(int i = 0; i < n; i++) chmax(ans, dp[i]);
    cout << ans << endl;
}