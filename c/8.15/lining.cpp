#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x]++;
    }
    bool ok = true;
    int ans = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] != 0 && a[i] != 2) ok = false;
        else if(a[i] == 2) ans = ((ans % MOD) * 2) % MOD;
    }
    if(!ok || (n % 2 != 0 && a[0] != 1)) cout << 0 << endl;
    else cout << ans % MOD << endl;
}