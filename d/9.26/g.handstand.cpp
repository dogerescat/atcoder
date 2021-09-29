#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

P func(int n) {
    int a = 0;
    int b = n % 10;
    while(n) {
        a = n;
        n /= 10;
    }
    return P(a, b);
}

int main() {
    int n; cin >> n;
    map<P, int> m;
    for(int i = 1; i <= n; i++) {
        P p = func(i);
        m[p]++;
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        P p = func(i);
        P q(p.second, p.first);
        ans += m[q];
    }
    cout << ans << endl;
}