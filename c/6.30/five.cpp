#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

int main() {
    ll n;
    vector<ll> a(5);
    cin >> n;
    for(int i = 0; i < 5; i++) cin >> a[i];
    ll m = a[0];
    for(int i = 1; i < 5; i++) chmin(m, a[i]);
    ll g = (n + m - 1) / m;
    cout << 5 + g - 1 << endl;
}