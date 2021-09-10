#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

const int MOD = 1000000007;
void ts(Graph &G, vector<int> &seen, int v, vector<int> &res) {
    seen[v] = true;
    for(auto i : G[v]) {
        if(seen[i]) continue;
        ts(G, seen, i, res);
    }
    res.push_back(v);
}

int main() {
    int n, m; cin >> n >> m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
    }
    vector<pair<int, int>> dp(n+1, pair<int, int> (0, 1001001001));
    vector<int> seen(n, 0);
    vector<int> order;
    for(int i = 0; i < n; i++) {
        if(seen[i]) continue;
        ts(G, seen, i, order);
    }
    reverse(order.begin(), order.end());
    dp[0].first = 1;
    dp[0].second = 0;
    for(int i = 0; i < n; i++) {
        for(auto j : G[order[i]]) {
            if(dp[j].second > dp[order[i]].second + 1) {
                dp[j].second = dp[order[i]].second + 1;
                dp[j].first = dp[order[i]].first;
            } else if(dp[j].second == dp[order[i]].second +1) {
                dp[j].first = (dp[j].first + dp[order[i]].first) % MOD;
            }
        }
    }
    cout << dp[n-1].first << endl;
}