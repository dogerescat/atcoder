#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1000000007;

int main() {
    int n; string s1, s2; cin >> n >> s1 >> s2;
    ll ans = 1, pre = -1, x = 0;
    while(x < n) {
        if(s1[x] == s2[x]) {
            if(pre == -1) ans = 3;
            else if(pre == 0) ans = ans * 2 % MOD;
            else if(pre == 1) ans = ans * 1 % MOD;
            x++; pre = 0;
        } else {
            if(pre == -1) ans = 6;
            else if(pre == 0) ans = ans * 2 % MOD;
            else if(pre == 1) ans = ans * 3 % MOD;
            x += 2; pre = 1;
        }
    }
    cout << ans << endl;
}