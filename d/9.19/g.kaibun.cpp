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
    int n; cin >> n;
    vector<int> a(n);
    UnionFind uf(200001);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n/2; i++) {
        uf.unite(a[i], a[n-1-i]);
    }
    int ans = 0;
    vector<bool> p(200001);
    for(int i = 0; i < 200001; i++) {
        if(uf.root(i) != i || p[uf.root(i)]) continue;
        p[uf.root(i)] = true;
        ans += uf.siz[i] - 1;
    }
    cout << ans << endl;
}