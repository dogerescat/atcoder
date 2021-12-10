#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

const ll INF = 1001001001001;
int main() {
	int n, W; cin >> n >> W;
	vector<int> w(n);
	vector<int> v(n);
	for(int i = 0; i < n; i++) cin >> w[i] >> v[i];
	vector<vector<ll>> dp(n+1, vector<ll> (100001, INF));
	dp[0][0] = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = 0; j <= 100000; j++) {
			if(j >= v[i-1]) dp[i][j] = min(dp[i][j], dp[i-1][j-v[i-1]] + w[i-1]);
			dp[i][j] = min(dp[i][j], dp[i-1][j]);
		}
	}
	int ans = 0;
	for(int i = 0; i <= 100000; i++) {
		if(dp[n][i] > W) continue;
		ans = max(ans, i);
	}
	cout << ans << endl;
}
