#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b; 
}

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<ll> x(n+1);
    for(int i = 1; i < n+1; i++) x[i] = x[i-1] + a[i-1];

    long long ans = 1000000000000000001;
    for(int i = 1; i < n; i++) {
        chmin(ans, abs(x[i] - (x[n] - x[i])));
    }
    cout << ans << endl;
}