#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int k; cin >> k;
    vector<ll> a;
    queue<ll> que;
    for(int i = 1; i <= 9; i++) que.push(i);
    while(!que.empty()) {
        if(a.size() >= k) {
            cout << a[k-1] << endl;
            return 0;
        }
        ll v = que.front();
        que.pop();
        ll d = v % 10;
        for(ll i = -1; i <= 1; i++) {
            ll e = d + i;
            if(e < 0 || e > 9) continue;
            ll nw = 10 * v + e;
            que.push(nw);
        }
        a.push_back(v);
    }
}