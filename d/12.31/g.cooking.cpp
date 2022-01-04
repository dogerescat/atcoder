#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> t(n);
	for(int i = 0; i < n; i++) cin >> t[i];
	int T = 0;
	for(int i = 0; i < n; i++) T += t[i];
	vector<vector<int>> dp(n+1, vector<int> (T+1));
	for(int i = 0; i <= n; i++) dp[i][0] = 1;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= T; j++) {
			if(j - t[i-1] >= 0) {
				if(dp[i-1][j-t[i-1]]) dp[i][j] = 1;
			}
			if(dp[i-1][j]) dp[i][j] = 1;
		}
	}	
	int ans = 1001001001;
	for(int i = 0; i <= T; i++) {
		if(!dp[n][i]) continue;
		int a = i, b = T - i;
		if(a < b) swap(a, b);
		ans = min(ans, a);
	}
	cout << ans << endl;
}
