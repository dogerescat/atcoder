#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<vector<ll>> dp(n+1, vector<ll> (n+1));
	for(int i = 0; i < n; i++) dp[i][i] = 0;
	for(int len = 1; len <= n; len++) {
		for(int i = 0; i + len <= n; i++) {
			int j = len + i;
			if((n - len) % 2 == 0) dp[i][j] = max(dp[i+1][j] + a[i], dp[i][j-1] + a[j-1]);
			else dp[i][j] = min(dp[i+1][j] - a[i], dp[i][j-1] - a[j-1]);
		}
	}
	cout << dp[0][n] << endl;
}
