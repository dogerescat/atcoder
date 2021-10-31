#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<ll> a;
    map<ll, int> m;
    for(int i = 0; i < n; i++) {
        ll x; cin >> x;
        m[x]++;
    }
    for(auto i : m) {
        int x = i.second;
        while(x >= 2) {
            a.push_back(i.first);
            x /= 2;
        }
    }
    sort(a.begin(), a.end(), greater<ll> ());
    if(a.size() < 2) cout << 0 << endl;
    else cout << a[0] * a[1] << endl;
}