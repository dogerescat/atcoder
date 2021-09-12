#include <bits/stdc++.h>
using namespace std;

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
    UnionFind uf(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        if(!uf.issame(a-1, b-1)) {
            uf.unite(a-1, b-1);
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans = max(ans, uf.siz[i]);
    }
    cout << ans << endl;
}