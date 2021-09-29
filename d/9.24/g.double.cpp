#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
    int n, m; cin >> n >> m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    queue<int> que;
    vector<int> dist(n, -1);
    vector<int> pre(n, -1);
    que.push(0);
    dist[0] = 0;
    while(!que.empty()) {
        int v = que.front();
        que.pop();
        for(auto i : G[v]) {
            if(dist[i] != -1) continue;
            dist[i] = dist[v]+1;
            pre[i] = v;
            que.push(i);
        }
    }
    cout << "Yes" << endl;
    for(int i = 1; i < n; i++) {
        cout << pre[i]+1 << endl;
    }
}