#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    int cnt = 1;
    for(int i = 0; i < n; i++) {
        if(a[i] == cnt) cnt++;
        else ans++;
    }
    if(ans == n) cout << -1 << endl;
    else cout << ans << endl;
}