#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1000000007;
ll X, Y; 
void dfs(vector<vector<ll>> &dp, ll x, ll y) {
    if(x > X || y > Y) return;
    if(x+1 <= X && y+2 <= Y) dp[x+1][y+2] = (dp[x+1][y+2] + dp[x][y]) % MOD;
    if(x+2 <= X && y+1 <= Y) dp[x+2][y+1] = (dp[x+2][y+1] + dp[x][y]) % MOD;
    dfs(dp, x+1, y+2);
    dfs(dp, x+2, y+1);
}

int main() {
    cin >> X >> Y;
    vector<vector<ll>> dp(X+1, vector<ll>(Y+1));
    dp[0][0] = 1;
    dfs(dp, 0, 0);
    cout << dp[X][Y] << endl;
}