#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    vector<pair<ll, int>> p;
    for(ll i = 2; i * i <= n; i++) {
        int x = 0;
        while(n % i == 0) {
            n /= i;
            x++;
        }
        p.push_back({i, x});
    }
    if(n != 1) p.push_back({n, 1});
    ll ans = 0;
    for(auto i : p) {
        int a = i.second;
        int b = 1;
        while(b <= a) {
            a -= b; 
            b++;
            ans++;
        }
    }
    cout << ans << endl;
}