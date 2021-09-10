#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T& a, T b) {
    if(a < b) a = b;
}

int main() {
    string s, t; cin >> s >> t;
    int m = (int)s.size();
    int n = (int)t.size();
    vector<vector<int>> dp(m+1, vector<int> (n+1, -1));
    for(int i = 0; i < m; i++) dp[i][0] = 0;
    for(int i = 0; i < n; i++) dp[0][i] = 0;
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(s[i-1] == t[j-1]) {
                chmax(dp[i][j],dp[i-1][j-1]+1);
            }
            chmax(dp[i][j],dp[i-1][j]);
            chmax(dp[i][j],dp[i][j-1]);
        }
    }
    string res = "";
    while(m > 0 && n > 0) {
        if(dp[m][n] == dp[m-1][n]) {
            --m;
        } else if(dp[m][n] == dp[m][n-1]) {
            --n;
        } else {
            res = s[m-1] + res;
            --m; --n;
        }
    }
    cout << res << endl;
}