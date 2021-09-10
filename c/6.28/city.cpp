#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n+1);
    vector<int> b(n);
    for(int i = 0; i < n + 1; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    long long ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] <= b[i]) {
            if(a[i]+a[i+1] >= b[i]) ans += b[i];
            else ans += a[i]+a[i+1];
            a[i+1] = max(a[i]+a[i+1]-b[i], 0);
        } else {
            ans += b[i];
        }
    }
    cout << ans << endl;
}