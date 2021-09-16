#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

const int INF = 1001001001;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> dp(n, INF);
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            if(i < j) break;
            chmin(dp[i], dp[i-j] + abs(a[i] - a[i-j]));
        }
    }
    cout << dp[n-1] << endl;
}