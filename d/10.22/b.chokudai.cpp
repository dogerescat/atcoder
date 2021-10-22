#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
   string s; cin >> s;
   string t = "chokudai";
   int n = s.size();
   vector<vector<int>> dp(n+1, vector<int>(9));
   for(int i = 0; i < n+1; i++) dp[i][0] = 1;
   for(int i = 1; i < n+1; i++) {
       for(int j = 1; j < 9; j++) {
          if(s[i-1] == t[j-1]) {
              dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % MOD;
          } else {
              dp[i][j] = dp[i-1][j] % MOD;
          } 
       }
   }
   cout << dp[n][8] << endl;
}