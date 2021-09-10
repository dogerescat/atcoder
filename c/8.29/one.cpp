#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int func(Graph &G, vector<int> seen, int n, int cur, int deep, int &cnt) {
    if(seen[cur]) return cnt;
    else seen[cur] = 1;
    if(n-1 == deep) {
        bool ok = true;
        for(auto i : seen) {
            if(!i) ok = false;
        }
        if(ok) return cnt+1;
        else return cnt;
    }
    for(auto i : G[cur]) {
        cnt = func(G, seen, n, i, deep+1, cnt);
    }
    return cnt;
}

int main() {
    int n, m; cin >> n >> m;
    Graph G(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    vector<int> seen(n);
    int cnt = 0;
    cout << func(G, seen, n, 0, 0, cnt) << endl;

}