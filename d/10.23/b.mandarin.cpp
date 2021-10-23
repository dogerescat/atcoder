#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<vector<int>> m(n, vector<int> (n));
    for(int i = 0; i < n; i++) {
        int mi = 1001001001;
        mi = min(mi, a[i]);
        for(int j = i; j < n; j++) {
            mi = min(mi, a[j]);
            m[i][j] = mi;
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            ans = max(ans, m[i][j]*abs(j - i + 1));
        }
    }
    cout << ans << endl;
}