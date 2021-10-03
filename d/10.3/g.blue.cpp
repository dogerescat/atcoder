#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1000000007;

int main() {
    int n, k; cin >> n >> k;
    vector<vector<ll>> C(4005, vector<ll>(4005));
    C[0][0] = 1;
    for(int i = 0; i <= 4000; i++) {
        for(int j = 0; j <= i; j++) {
            C[i+1][j] = (C[i+1][j] + C[i][j]) % MOD;
            C[i+1][j+1] = (C[i+1][j+1] + C[i][j]) % MOD; 
        }
    }
    for(int i = 1; i <= k; i++) {
        ll a = C[n-k+1][i] * C[k-1][i-1] % MOD;
        cout << a << endl;
    }
}