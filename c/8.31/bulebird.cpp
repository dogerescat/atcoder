#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to;
    int wight;
    Edge(int t, int w) {
        to = t;
        wight = w;
    }  
};
using Graph = vector<vector<Edge>>;

int main() {
    int n, m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int u, v, l; cin >> u >> v >> l;
        
    }
}