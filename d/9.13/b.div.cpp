#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    set<ll> s;
    for(ll i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            ll z = 1;
            while(z*i <= n) {
                z *= i;
                if(n % z == 0 && !s.count(z)) {
                    n /= z;
                    s.insert(z);                    
                }
            }
        }
    }
    if(n != 1) s.insert(n);
    cout << s.size() << endl;
}