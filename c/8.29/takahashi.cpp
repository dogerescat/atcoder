//このやり方は実質bit全探索とやってること一緒だから計算量はO(2^N)データが大きくなるとTLE
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(vector<ll> &x, vector<int> uc, int n, double a, int cur, ll cnt) {
    if(n == cur) {
        double total = 0;
        double c = 0;
        for(int i = 0; i < n; i++) {
            if(uc[i]) total += x[i], c++;
        }
        if(c != 0) {
            if(total / c == a) cnt++;
        }
        return cnt;
    }
    ll c1 = func(x, uc, n, a, cur+1, cnt);
    uc[cur] = 1;
    ll c2 = func(x, uc, n, a, cur+1, cnt);
    return c1 + c2;
}

int main() {
    int n; double a; cin >> n >> a;
    vector<ll> x(n);
    ll cnt = 0;
    vector<int> use_card(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    ll ans = func(x, use_card, n, a, 0, cnt);
    cout << ans << endl;
}