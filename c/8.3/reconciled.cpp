#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int main() {
    int n, m; cin >> n >> m;
    if(abs(n - m) >= 2) {
        cout << 0 << endl;
        return 0;
    }
    long long ans = 1;
    for(int i = 1; i < n+1; i++) ans = (ans * i) % mod;
    for(int i = 1; i < m+1; i++) ans = (ans * i) % mod;
    if((n+m) % 2 == 0) cout << (ans * 2) % mod << endl;
    else cout << ans % mod << endl;
}