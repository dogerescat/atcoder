#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

void ts(Graph &G, vector<bool> &seen, int v, vector<int> &res) {
    if(seen[v]) return;
    seen[v] = true;
    for(auto i : G[v]) {
        // if(seen[i]) continue;
        ts(G, seen, i, res);
    }
    res.push_back(v);
}

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

int main() {
    int n, m; cin >> n >> m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
    }
    vector<int> res;
    vector<bool> seen(n);
    for(int i = 0; i < n; i++) {
        // if(seen[i]) continue;
        ts(G, seen, i, res);
    }
    reverse(res.begin(), res.end());
    vector<int> dp(n+1);
    for(auto i : res) {
        for(auto j : G[i]) {
            chmax(dp[j], dp[i] + 1);
        }
    }
    int ans = 0;
    for(auto i : dp) {
        chmax(ans, i);
    }
    cout << ans << endl;
}