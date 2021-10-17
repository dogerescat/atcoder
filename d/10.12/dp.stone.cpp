#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> dp(k+1);
    for(int i = 0; i <= k; i++) {
        int cnt = 0; int lose = 0;
        for(int j = 0; j < n; j++) {
            if(i - a[j] >= 0) {
                cnt++;
                if(!dp[i-a[j]]) lose++;
            }
        }
        if(!cnt) dp[i] = 0;
        else if(lose) dp[i] = 1;
        else dp[i] = 0;
    }
    if(dp[k]) cout << "First" << endl;
    else cout << "Second" << endl;
}