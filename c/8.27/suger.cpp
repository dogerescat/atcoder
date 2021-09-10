#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    vector<vector<int>> dp(f+1, vector<int> (f+1));
    dp[0][0] = 1;
    int sw = 100 * a;
    int s = 0;
    double nodo = 0;
    for(int i = 1; i <= f; i++) {
        for(int j = 0; j <= i; j++) {
            int water = i - j;
            int suger = j;
            if(100 * a <= i) if(dp[i-100*a][j]) dp[i][j] = 1;
            if(100 * b <= i) if(dp[i-100*b][j]) dp[i][j] = 1;
            if(c <= i && c <= j) if(dp[i-c][j-c]) dp[i][j] = 1;
            if(d <= i && d <= j) if(dp[i-d][j-d]) dp[i][j] = 1;

            if(100 * suger <= e * water && dp[i][j] && 0 < j) {
                double nodo2 = 1.0 * 100 * j / i;
                if(nodo < nodo2) {
                    nodo = nodo2;
                    sw = i;
                    s = j;
                }
            }
        }
    }
    cout << sw << " " << s << endl;
}