#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);
    vector<set<int>> x(n);
    for(int i = 0; i < m; i++) cin >> a[i] >> b[i];
    for(int i = 0; i < m; i++) {
        if(x[b[i]].count(a[i])) {
            cout << -1 << endl;
            return 0;
        }
        x[a[i]].insert(b[i]);
    }
    vector<int> ans(n);
    iota(ans.begin(), ans.end(), 1);
    for(int i = 0; i < n; i++) {
        if(a[i] > b[i]) {
            swap(a[i], b[i]);
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
}