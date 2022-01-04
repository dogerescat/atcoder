#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
	int n; cin >> n;
	vector<int> dp(n+1);
	dp[0] = 1;
	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= i-3; j++) {
			dp[i] = (dp[i] + dp[j]) % MOD;
		}
	}
	cout << dp[n] << endl;
}
