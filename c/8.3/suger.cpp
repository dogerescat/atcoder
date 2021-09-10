#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D, E, F; cin >> A >> B >> C >> D >> E >> F;
    vector<vector<int>> dp(F+1, vector<int>(F+1));
    dp[0][0] = 1;
    double m = 0;
    int ans1 = 100 * A;
    int ans2 = 0;
    for(int i = 1; i < F+1; i++) for(int j = 0; j < i; j++) {
        int water = i - j;
        int suger = j;
        if(100 * A <= i) if(dp[i - 100 * A][j]) dp[i][j] = 1;
        if(100 * B <= i) if(dp[i - 100 * B][j]) dp[i][j] = 1;
        if(C <= i && C <= j) if(dp[i - C][j - C]) dp[i][j] = 1;
        if(D <= i && D <= j) if(dp[i - D][j - D]) dp[i][j] = 1;
        
        if(100 * suger <= E * water && dp[i][j] && 0 < j) {
            double e = 1.0 * 100 * j / i;
            if(e > m) {
                m = e;
                ans1 = i;
                ans2 = j;
            }
        }
    }
    cout << ans1 << " " << ans2 << endl;
}