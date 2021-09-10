#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

const int MOD = 1000000007;

int main() {
    int n, m; cin >> n >> m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    vector<int> dist(n, -1);
    queue<int> que;
    vector<int> vs;
    dist[0] = 0;
    que.push(0);
    while(!que.empty()) {
        int v = que.front();
        vs.push_back(v);
        que.pop();
        for(auto i : G[v]) {
            if(dist[i] != -1) continue;
            dist[i] = dist[v] + 1;
            que.push(i);
        }
    }
    vector<int> dp(n);
    dp[0] = 1;
    for(auto i : vs) {
        for(auto j : G[i]) {
            if(dist[j] == dist[i] + 1) {
                dp[j] = (dp[j] + dp[i]) % MOD;
            }
        }
    }
    cout << dp[n-1] << endl;
}