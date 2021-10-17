#include <bits/stdc++.h>
using namespace std;

int func(char c) {
    if(c == '+') return 1;
    else  return -1;
}
const int INF = 1001001001;
int main() {
    int h, w; cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> a[i][j];
    vector<vector<int>> dp(h, vector<int>(w));
    for(int i = h-1; i >= 0; i--) {
        for(int j = w-1; j >= 0; j--) {
            if(i == (h-1) && j == (w-1)) continue;
            if((i+j) % 2 == 0) {
                dp[i][j] = -INF;
                if(i < (h-1)) dp[i][j] = max(dp[i][j], dp[i+1][j] + func(a[i+1][j]));
                if(j < (w-1)) dp[i][j] = max(dp[i][j], dp[i][j+1] + func(a[i][j+1]));
            } else {
                dp[i][j] = INF;
                if(i < (h-1)) dp[i][j] = min(dp[i][j], dp[i+1][j] - func(a[i+1][j]));
                if(j < (w-1)) dp[i][j] = min(dp[i][j], dp[i][j+1] - func(a[i][j+1]));
            }
        }
    }
    if(dp[0][0] > 0) cout << "Takahashi" << endl;
    else if(dp[0][0] < 0) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
}