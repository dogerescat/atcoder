#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int q; cin >> q;
    priority_queue<ll, vector<ll>, greater<ll>> que;
    ll s = 0;
    for(int i = 0; i < q; i++) {
        int a; ll x; cin >> a;
        if(a == 3) {
            cout << que.top() + s << endl;
            que.pop();
        }
        if(a == 1) {
            cin >> x;
            que.push(x-s);
        }
        if(a == 2) {
            cin >> x;
            s += x;
        }
    }
}