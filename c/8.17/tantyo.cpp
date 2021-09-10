#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n; 
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll cnt = 1;
    ll ans = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] <= a[i-1]) ans += ((cnt + 1) * cnt) / 2, cnt = 1;
        else cnt++;
    }
    ans += ((cnt + 1) * cnt) / 2;
    cout << ans << endl;
}