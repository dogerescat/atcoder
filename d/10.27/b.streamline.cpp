#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;
int main() {
    int n, m; cin >> n >> m;
    vector<int> x(m);
    for(int i = 0; i < m; i++) cin >> x[i];
    if(n >= m) {
        cout << 0 << endl;
        return 0;
    } 
    sort(x.begin(), x.end());
    vector<int> a(m-1);
    for(int i = 1; i < m; i++) {
        a[i-1] = x[i] - x[i-1];
    }
    sort(a.begin(), a.end(), greater<int>());
    int mi = INF;
    int M = -INF;
    for(int i = 0; i < m; i++) {
        mi = min(mi, x[i]);
        M = max(M, x[i]);
    }
    int ans = M - mi;
    for(int i = 0; i < n - 1; i++) {
        ans -= a[i];
    }
    cout << ans << endl;
}