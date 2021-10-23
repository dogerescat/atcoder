#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
    int m; cin >> m;
    Graph G(9);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> p(8);
    for(int i = 0; i < 8; i++) cin >> p[i];
        
}