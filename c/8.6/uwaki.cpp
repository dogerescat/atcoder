#include <bits/stdc++.h>
using namespace std;

int main() {
    int txa, tya, txb, tyb, t, v, n;
    cin >> txa >> tya >> txb >> tyb >> t >> v >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    int ok = false;
    for(int i = 0; i < n; i++) {
        int x = (a[i].first - txa) * (a[i].first - txa);
        int y = (a[i].second - tya) * (a[i].second - tya);
        int x2 = (txb - a[i].first) * (txb - a[i].first);
        int y2 = (tyb - a[i].second) * (tyb - a[i].second);
        // int z = sqrt(x + y) + sqrt(x2 + y2);
        if(sqrt(x + y) + sqrt(x2 + y2) <= t * v) ok = true;
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}