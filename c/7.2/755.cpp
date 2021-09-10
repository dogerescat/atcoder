#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void func(ll cur, ll &ans, int use, int n) {
    if(cur > n) return;
    if(use == 0b111) ans++;
    func(cur*10+7, ans, use | 0b100, n);
    func(cur*10+5, ans, use | 0b010, n);
    func(cur*10+3, ans, use | 0b001, n);
}

int main() {
    int n; cin >> n;
    ll ans = 0;
    func(0, ans, 0, n);
    cout << ans << endl;
}