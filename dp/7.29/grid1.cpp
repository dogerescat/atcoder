#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int main() {
    int h, w; cin >> h >> w;
    vector<vector<char>> a(h+1, vector<char> (w+1));
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) {
        cin >> a[i][j];
    }
    vector<vector<int>> dp(h+1, vector<int>(w+1));
    dp[0][0] = 1;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(i+1 < h && a[i+1][j] != '#') dp[i+1][j] = (dp[i+1][j] + dp[i][j] % mod) % mod;
            if(j+1 < w && a[i][j+1] != '#') dp[i][j+1] = (dp[i][j+1] + dp[i][j] % mod) % mod;
        }
    }
    cout << dp[h-1][w-1] << endl;
}