#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    vector<ll> a;
    while(n) {
        a.push_back(n%10);
        n /= 10;
    }
    int k = a.size();
    int ans = 0;
    for(int bit = 0; bit < 1 << k; bit++) {
        ll x = 0;
        int cnt = 0;
        for(int i = 0; i < k; i++) {
            if(bit & 1 << i) {
                x = x*10 + a[i];
                cnt++;
            }
        }
        if(x % 3 == 0) ans = max(ans, cnt);
    }
    if(ans == 0) {
        cout << -1 << endl;
    } else {
        cout << k - ans << endl;
    }
}