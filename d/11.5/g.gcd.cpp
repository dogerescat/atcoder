#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return !b ? a : gcd(b, a % b);
}
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if(a.size() <= 2) {
        cout << a[n-1] << endl;
        return 0;
    }
    vector<int> b(n);
    vector<int> c(n);
    int initv = a[0];
    for(int i = 0; i < n; i++) {
        initv = gcd(initv, a[i]);
        b[i] = initv;
    }
    initv = a[n-1];
    for(int i = n-1; i >= 0; i--) {
        initv = gcd(initv, a[i]);
        c[i] = initv;
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(i == 0) ans = max(ans, c[i+1]);
        else if(i == n-1) ans = max(ans, b[n-2]);
        else {
            int x = gcd(b[i-1], c[i+1]);
            ans = max(ans, x);
        }
    }
    cout << ans << endl;
}