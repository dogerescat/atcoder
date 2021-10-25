#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(ll a, ll b, ll n) {
   ll nd = to_string(n).length();
   return a * n + b * nd; 
}

int main() {
    ll a, b, x; cin >> a >> b >> x;
    ll ok = 0; ll ng = 1000000001;
    while(ng - ok > 1) {
        int mid = (ok + ng) / 2;
        if(func(a, b, mid) <= x) ok = mid;
        else ng = mid; 
    }
    cout << ok << endl;
}