#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    return !b ? a : gcd(b, a%b);
}
int main() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(n);
    for(int i = 0; i < n; i++) b[i] = abs(a[i]-x);
    int ans = b[0];
    for(int i = 0; i < n; i++) {
        ans = gcd(ans, b[i]);
    }
    cout << ans << endl;
}