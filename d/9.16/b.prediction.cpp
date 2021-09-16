#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

int main() {
    int n, k;
    string t;
    vector<int> jan(3);
    cin >> n >> k >> jan[0] >> jan[1] >> jan[2] >> t;
    vector<string> v(k+1);
    for(int i = 0; i < n; i++) {
        cout << v[i%k] << endl;
        v[i%k] += t[i];
        cout << v[i%k] << endl;
    }
    int ans = 0;
    for(int i = 0; i < k; i++) {
        vector<vector<int>> dp(n+1, vector<int>(3));
        if(v[i][0] == 'r') dp[1][2] += jan[2];
        if(v[i][0] == 's') dp[1][0] += jan[0];
        if(v[i][0] == 'p') dp[1][1] += jan[1];
        for(int j = 1; j < v[i].size(); j++) {
            if(v[i][j] == 'r') {
                for(int last = 0; last < 3; last++) {
                    for(int next = 0; next < 3; next++) {
                        if(last != next) {
                            if(last != 2) chmax(dp[j+1][2], dp[j][last] + jan[2]);
                        }
                    }
                }
            }
        }
        int total = 0;
        for(int j = 0; j < 3; j++) chmax(total, dp[n][j]);
        ans += total;
    }
    cout << ans << endl;
}