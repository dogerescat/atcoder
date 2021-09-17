#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<pair<ll, ll>> x(n);
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        x[i].first = b; x[i].second = a;
    }
    sort(x.begin(), x.end());
    ll cnt = 0;
    for(int i = 0; i < n; i++) {
        cnt += x[i].second;
        if(cnt > x[i].first) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}