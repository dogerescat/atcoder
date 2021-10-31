#include <bits/stdc++.h>
using namespace std;
struct UnionFind {
    vector<int> par, chl,siz;
    UnionFind(int n): par(n+1, -1), chl(n+1, -1), siz(n+1, 1) {}

    int root(int i) {
        if(par[i] == -1) return i;
        else return par[i] = root(par[i]);
    }

    bool issame(int x, int y) {
        return root(x) == root(y);
    }

    void unite(int x, int y) {
        par[y] = x;
        chl[x] = y;
        siz[x] += siz[y];
    }
    void separate(int x, int y) {
        par[y] = -1;
        chl[x] = -1;
        siz[x] -= siz[y];
    }

    void printv(int x) {
        x = root(x);
        while(chl[x] != -1) {
            cout << x << " ";
           x = chl[x]; 
        }
        cout << endl;
    }
};
int main() {
    int n, q; cin >> n >> q;
    UnionFind uf(n);
    for(int i = 0; i < q; i++) {
        int t, x, y; cin >> t;
        if(t == 1) {
            cin >> x >> y;
            uf.unite(x, y);
        } else if(t == 2) {
            cin >> x >> y;
            uf.separate(x, y);
        } else {
            cin >> x;
            uf.printv(x);
        }
    }
}