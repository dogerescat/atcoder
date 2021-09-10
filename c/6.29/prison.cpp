#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int L = 0;
    int R = 1e9;
    for(int i = 0; i < m; i++) {
        int l, r; cin >> l >> r;
        L = max(L, l);
        R = min(R, r);
    }
    if( R - L + 1 >= 0) cout <<  R - L + 1 << endl;
    else cout << 0 << endl;
}