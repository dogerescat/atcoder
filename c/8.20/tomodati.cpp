#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>; 

void func(Graph &G, vector<int> &memo, int cur, int n, int deep = 0) {
    if(deep == 1) {
        for(auto i : G[cur]) {
            if(memo[i] == -1) {
                memo[i] = 1;
            } 
        }
        return;
    }
    if(memo[cur] != -1) return;
    for(auto i : G[cur]) {
        func(G, memo, i, n, deep+1);
        memo[i] = 0;
    }
    return;
}

int main() {
    int n, m; cin >> n >> m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    for(int i = 0; i < n; i++) {
        vector<int> memo(n, -1);
        func(G, memo, i, i);
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(i != j && memo[j] == 1) cnt++;
        }
        cout << cnt << endl;
    }
}