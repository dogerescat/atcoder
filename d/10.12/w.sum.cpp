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
using ll = long long;
int main() {
    int n; cin >> n;
    vector<pair<int, pair<int, int>>> p(n);
    for(int i = 0; i < n-1; i++) {
        int u, v, w; cin >> u >> v >> w;
        --u, --v;
        p.push_back(make_pair(w, make_pair(u, v)));
    }
    sort(p.begin(), p.end());
    ll ans = 0;
    UnionFind uf(n);
    for(auto [a, b] : p) {
        ans += (ll)(a) * uf.siz[uf.root(b.first)] * uf.siz[uf.root(b.second)];
        uf.unite(b.first, b.second);
    }
    cout << ans << endl;
}