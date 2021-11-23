#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<vector<int>> dp(n, vector<int> (10));
	dp[0][a[0]] = 1;
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < 10; j++) {
			if(dp[i-1][j]) {
				dp[i][(j+a[i])%10] = (dp[i][(j+a[i])%10] + dp[i-1][j]) % MOD;
				dp[i][(j*a[i])%10] = (dp[i][j*a[i]%10] + dp[i-1][j]) % MOD;
			}
		}
	}
	for(int i = 0; i < 10; i++) {
		cout << dp[n-1][i] << endl;
	}
}
