#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main() {
    int n, m; cin >> n >> m;
    vector<bool> ng(n+1, true);
    vector<int> dp(n+1);
    for(int i = 0; i < m; i++) {
        int a; cin >> a;
        ng[a] = false;
    }
    dp[0] = 1;
    for(int i = 0; i <= n; i++) {
        for(int j = 1; j <= 2; j++) {
            if(ng[i+j]) {
                dp[i+j] += dp[i] % mod;
            } 
        }
    }
    cout << dp[n] % mod << endl;
}