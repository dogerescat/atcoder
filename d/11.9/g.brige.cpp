#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
struct UnionFind {
    vector<int> par, siz;
    UnionFind(int n): par(n, -1), siz(n, 1) {}

    int root(int i) {
        if(par[i] == -1) return i;
        else return par[i] = root(par[i]);
    }

    bool issame(int x, int y) {
        return root(x) == root(y);
    }

    bool unite(int x, int y) {
        x = root(x); y = root(y);
        if(x == y) return false;
        if(siz[x] < siz[y]) swap(x, y);
        par[y] = x;
        siz[x] += siz[y];
        return true;
    }
};
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> a[i] >> b[i];
    for(int i = 0; i < m; i++) a[i]--, b[i]--;
    
    int ans = 0;
    for(int i = 0; i < m; i++) {
        UnionFind uf(n);
        for(int j = 0; j < m; j++) {
            if(i != j) uf.unite(a[j], b[j]);
        }
        int r = uf.root(0);
        bool ok = true;
        for(int i = 0; i < n; i++) {
            if(r != uf.root(i)) ok = false;
        }
        if(!ok) ans++;
    }
    cout << ans << endl;
}