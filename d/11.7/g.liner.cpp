#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> B(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) B[i-1] = a[i-1] - i;
    sort(B.begin(), B.end());
    int b = B[n/2];
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += abs(a[i] - (i+1) - b);
    }
    cout << ans << endl;
}