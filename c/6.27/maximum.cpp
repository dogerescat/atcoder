#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n-1);
    for(int i = 0; i < n-1; i++) cin >> b[i];
    a[0] = b[0];
    a[a.size() - 1] = b[b.size() - 1];
    for(int i = 1; i < n - 1; i++) {
        a[i] = min(b[i-1], b[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += a[i];
    }
    cout << ans << endl;
}