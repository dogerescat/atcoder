#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1000000007;
int main() {
    ll n; cin >> n;
    map<ll,ll> m;
    vector<ll> prime;
    for(int i = 2; i <= n; i++) {
        bool ok = true;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) ok = false;
        }
        if(ok) prime.push_back(i);
    }
    for(int i = 2; i <= n; i++) {
        for(int j = 0; j < prime.size(); j++) {
            ll k = i;
            while(k % prime[j] == 0) {
                m[prime[j]]++;
                k /= prime[j];
            }
        }
    }
    ll ans = 1;
    for(auto i : m) {
        ans = ans * (i.second + 1) % mod;
    }
    cout << ans << endl;
}