#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<vector<ll>> dp(n+1, vector<ll> (n+1));
	for(int len = 1; len <= n; len++) {
		for(int l = 0; l + len <= n; l++) {
			int r = l + len;
			if((n - len) % 2 == 0) dp[l][r] = max(dp[l+1][r] + a[l], dp[l][r-1] + a[r-1]);
			else dp[l][r] = min(dp[l+1][r] - a[l], dp[l][r-1] - a[r-1]);
		}
	}	
	cout << dp[0][n] << endl;
}
