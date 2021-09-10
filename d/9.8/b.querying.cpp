#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int q; cin >> q;
    set<pair<ll, ll>> s;
    vector<ll> plas(q+1, 0);
    vector<tuple<ll, ll, ll>> ans;
    
    for(int i = 0; i < q; i++) {
        int a; cin >> a;
        if(a == 3) {
            auto ite = s.begin();
            ll b = ite -> first;
            ans.push_back({b, ite->second, i});
            s.erase(ite);
        } 
        if(a == 1) {
            ll x; cin >> x;
            s.insert({x, i});
        } 
        if(a == 2) {
            ll x; cin >> x;
            plas[i] += x;
        } 
        plas[i+1] = plas[i];
    }
    for(auto i : ans) {
        auto [a, b, c] = i;
        cout << a + plas[c] - plas[b] << endl;
    }
}