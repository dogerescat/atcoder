#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string func(vector<vector<ll>> &dp, int a, int b, ll k) {
    if(a == 0) {
        return string(b, 'b');
    }
    if(b == 0) {
        return string(a, 'a');
    }
    if(dp[a-1][b] < k) {
        return 'b' + func(dp, a, b-1, k - dp[a-1][b]);
    } else {
        return 'a' + func(dp, a-1, b, k);
    }
}

int main() {
    int a, b; ll k; cin >> a >> b >> k;
    vector<vector<ll>> dp(a+1, vector<ll>(b+1));
    dp[0][0] = 1;
    for(int i = 0; i < a+1; i++) {
        for(int j = 0; j < b+1; j++) {
            if(i > 0) {
                dp[i][j] += dp[i-1][j]; 
            }
            if(j > 0) {
                dp[i][j] += dp[i][j-1];
            }
        }
    }    
    cout << func(dp, a, b, k) << endl;
}