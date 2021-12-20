#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<pair<ll, ll>> s;
    for(int i = 0; i < n; i++) {
        ll a, b; cin >> a >> b;
        s.push_back(make_pair(a, 1));
        s.push_back(make_pair(a+b, 0));
    }
    sort(s.begin(), s.end());
    vector<ll> ans(n+1);
    ll cnt = 0;
    ll pre_day = 0;
    for(auto i : s) {
        ans[cnt] += i.first - pre_day; 
        if(i.second) cnt++;
        else cnt--;
        pre_day = i.first;
    }
    for(int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
