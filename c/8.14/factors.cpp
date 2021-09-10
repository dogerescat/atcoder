#include <bits/stdc++.h>
using namespace std;

int const MOD = 1000000007;

int main() {
    int n; cin >> n;
    map<int, int> m;
    long long ans = 1;
    for(int i = 1; i <= n; i++) {
        int k = i;
        for(int j = 2; j*j <= k; j++) {
            while(k % j == 0) {
                m[j]++;
                k /= j;
            }
        }
        if(k != 1) m[k]++;
    }
    for(auto i : m) {
        ans = ((ans % MOD) * (i.second + 1) % MOD) % MOD;
    }
    if(n == 1) cout << 1 << endl;
    else cout << ans % MOD << endl;
}