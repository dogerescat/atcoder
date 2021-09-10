#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

bool func(Graph &G, vector<bool> &memos , int n, int i, int deep = 0) {
    deep++;
    if(i == n && deep <= 2) {
        return true;
    }
    if(deep > 2 || !memos[i]) {
        return memos[i] = false;
    }
    for(auto j : G[i]) {
        bool ok = func(G, memos, n, j, deep);
        if(ok) return true;
    }
    return memos[i] = false;
}

int main() {
    int n, m; cin >> n >> m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    vector<bool> memos(n, true);
    memos[0] = false;
    for(auto i : G[0]) {
        bool ok = func(G, memos, n-1, i);
        if(ok) {
            cout << "POSSIBLE" << endl;
            return 0;
        } 
    }
    cout << "IMPOSSIBLE" << endl;
}