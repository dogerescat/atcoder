#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> stairs(n+10, true);
    for(int i = 0; i < m; i++) {
        int a; cin >> a;
        stairs[a] = false;
    }
    vector<int> dp(n+10);
    dp[0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < 3; j++) {
            if(stairs[i+j]){
                dp[i+j] += dp[i] % INF;
            }
        }
    }
    cout << dp[n] % INF << endl;
}