#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

const int MOD = 1000000007;

int main() {
    int n, m, a, b; cin >> n >> a >> b >> m;
    a--; b--;
    Graph G(n);
    vector<pair<int, int>> dp(n, pair<int, int> (-1, 0));
    queue<int> que;
    vector<bool> dist(n);
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        G[x-1].push_back(y-1);
        G[y-1].push_back(x-1);
    }
    dp[a].first = 0;
    dp[a].second = 1;
    que.push(a);
    dist[a] = true;
    while(!que.empty()) {
        int v = que.front();
        que.pop();
        for(auto x : G[v]) {
            if(dp[x].first == -1) {
                dp[x].first = dp[v].first + 1;
                dp[x].second = dp[v].second;
            } else {
                if(dp[x].first == dp[v].first + 1) {
                    dp[x].second = (dp[x].second + dp[v].second) % MOD;
                } else if(dp[x].first > dp[v].first + 1) {
                    dp[x].first = dp[v].first + 1;
                    dp[x].second = dp[v].second;
                }
            }
            if(!dist[x]) que.push(x), dist[x] = true;
        }
    }
    cout << dp[b].second % MOD << endl;
}