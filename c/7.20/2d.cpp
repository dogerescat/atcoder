#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> red(n, pair<int, int> ());
    vector<pair<int, int>> blue(n, pair<int, int> ());
    for(int i = 0; i < n; i++) cin >> red[i].first >> red[i].second;
    for(int i = 0; i < n; i++) cin >> blue[i].first >> blue[i].second;
    vector<vector<int>> dp(n+1, vector<int>(n+1));
    dp[0][0] = 0;
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) {
        
    }
}