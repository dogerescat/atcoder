#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m; cin >> n >> m;
    priority_queue<int> que;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        que.push(a);
    }
    for(int i = 0; i < m; i++) {
        int v = que.top(); que.pop();
        que.push(v/2);
    }
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll v = que.top(); que.pop();
        ans += v;
    }
    cout << ans << endl;
}