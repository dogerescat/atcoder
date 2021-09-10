#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<bool> a(n);
    vector<bool> b(n);
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        if(x == 1 || y == 1) a[x-1] = true, a[y-1] = true;
        if(x == n || y == n) b[x-1] = true, b[y-1] = true;
    }
    for(int i = 0; i < n; i++) {
        if(a[i] && b[i]) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}