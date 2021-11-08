#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n, k; cin >> n >> k;
    vector<int> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    vector<ll> p;
    vector<ll> m;
    p.push_back(0);
    m.push_back(0);
    for(int i = 0; i < n; i++) {
        if(x[i] > 0) p.push_back(x[i]);
        else m.push_back(-x[i]);
    } 
    sort(p.begin(), p.end());
    sort(m.begin(), m.end());
    ll ans = 1001001001001001;
    int a = p.size();
    int b = m.size();
    for(int i = 0; i < a; i++) {
        int j = k - i;
        if(j < b && j >= 0) ans = min(ans, p[i] + m[j] * 2);
    }
    for(int i = 0; i < b; i++) {
        int j = k - i;
        if(j < a && j >= 0) ans = min(ans, m[i] + p[j] * 2);
    }
    cout << ans << endl;
}