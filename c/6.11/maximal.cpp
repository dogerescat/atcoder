#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b(n-1);
    for(int i = 0; i < n-1; i++) cin >> b[i];
    vector<int> a(n);
    a[0] = b[0];
    a[a.size() - 1] = b[b.size() - 1];
    for(int i = 0; i < n - 2; i++) {
        a[i+1] = min(b[i], b[i+1]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++) ans += a[i];
    cout << ans << endl;
}