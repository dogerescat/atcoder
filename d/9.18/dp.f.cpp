#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

int main() {
    string s, t; cin >> s >> t;
    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    for(int i = 0; i < n; i++) dp[i][0] = 0;
    for(int i = 0; i < m; i++) dp[0][i] = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(s[i] == t[j]) {
                chmax(dp[i+1][j+1], dp[i][j] + 1);
            }
            chmax(dp[i+1][j+1], dp[i+1][j]);
            chmax(dp[i+1][j+1], dp[i][j+1]);
        }
    }
    string res = "";
    while(n > 0 && m > 0) {
        if(dp[n][m] == dp[n][m-1]) {
            m--;
        } else if(dp[n][m] == dp[n-1][m]) {
            n--;
        } else {
            res = s[n-1] + res;
            n--; m--;
        }
    }
    cout << res << endl;
}