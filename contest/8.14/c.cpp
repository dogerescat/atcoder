#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    vector<ll> s(n);
    vector<ll> t(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    ll m = 1001001001;
    for(int i = 0; i < n; i++) {
        cin >> t[i];
        if(m > t[i]) m = i;
    }
    vector<ll> ans(n);
    ll time = t[m];
    ans[m] = time;
    for(int i = 1; i < n*2; i++) {
        if((s[(m+i-1)%n] + time) > t[(m+i)%n]) {
            time = t[(m+i)%n]; 
            ans[(m+i)%n] = time;
        } else {
            time += s[(m+i-1)%n];
            ans[(m+i)%n] = time;
        } 
    }
    for(int i = 0; i < n; i++) cout << ans[i] << endl;
}