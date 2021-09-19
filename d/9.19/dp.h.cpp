#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    int h, w; cin >> h >> w;
    vector<vector<char>> G(h+1, vector<char> (w+1));
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> G[i][j];
    vector<vector<int>> dp(h, vector<int> (w));
    dp[0][0] = 1;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(i+1 != h) {
                if(G[i+1][j] == '.') dp[i+1][j] = (dp[i+1][j] + dp[i][j]) % MOD; 
            }
            if(j+1 != w) {
                if(G[i][j+1] == '.') dp[i][j+1] = (dp[i][j+1] + dp[i][j]) % MOD;
            }
        }
    }
    cout << dp[h-1][w-1] << endl;
}