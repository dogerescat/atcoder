#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

int main() {
    int D, G; cin >> D >> G;
    vector<int> p(D);
    vector<int> c(D);
    for(int i = 0; i < D; i++) cin >> p[i] >> c[i];
    G /= 100;
    for(int i = 0; i < D; i++) c[i] /= 100;
    int cnt = 0;
    for(int i = 0; i < D; i++) cnt += p[i];
    vector<vector<int>> dp(D+1, vector<int>(cnt+1, 0));

    for(int i = 0; i < D; i++) {
        for(int num = 0; num <= cnt; num++) {
            for(int j = 0; j <= p[i]; j++) {
                if(num + j <= cnt) {
                    if(j == p[i]) chmax(dp[i+1][num+j], dp[i][num] + (i+1) * j + c[i]);
                    else chmax(dp[i+1][num+j], dp[i][num] + (i+1) * j);
                }
            }
        }
    }

    for(int i = 0; i <= D; i++) {
        for(int j = 0; j <= cnt; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i <= cnt; i++) {
        if(dp[D][i] >= G) {
            cout << i << endl;
            return 0;
        }
    }
}