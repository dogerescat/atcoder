#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 1;
    n -= k;
    k--;
    ans += (n + k - 1) / k;
    cout << ans << endl;
}