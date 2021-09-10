#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
    int n, q; cin >> n >> q;
    Graph G(n);
    for(int i = 0; i < n-1; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    vector<int> dist(n, -1);
    queue<int> que;
    que.push(0);
    dist[0] = 0;
    while(!que.empty()) {
        int v = que.front();
        que.pop();
        for(auto i : G[v]) {
            if(dist[i] != -1) continue;
            dist[i] = dist[v]+1;
            que.push(i);
        }
    }
    for(int i = 0; i < q; i++) {
        int c, d; cin >> c >> d;
        int x = abs(dist[d-1] - dist[c-1]);
        if(x % 2 == 0) {
            cout << "Town" << endl;
        } else {
            cout << "Road" << endl;
        }
    }
}