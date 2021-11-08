#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void func(ll cur, int n, int use, ll &ans) {
   if(cur > n) return;
   if(use == 0b111) ans++;
   func(cur * 10 + 7, n, use | 0b100, ans);
   func(cur * 10 + 5, n, use | 0b010, ans);
   func(cur * 10 + 3, n, use | 0b001, ans);
}
int main() {
    int n; cin >> n;
    ll ans = 0;
    func(0, n, 0, ans);
    cout << ans << endl;
}