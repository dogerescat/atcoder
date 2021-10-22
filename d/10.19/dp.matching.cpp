#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main() {
	int n; cin >> n;
	vector<vector<int>> a(n,vector<int>(n));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	vector<int> dp((1 << n)+ 1);
	dp[0] = 1;
	for(int s = 1; s < (1 << n); s++) {
	 	int i = __builtin_popcount(s);
		for(int j = 0; j < n; j++) {
			if(((s >> j) & 1) && a[i-1][j]) {
				dp[s] = (dp[s] + dp[s ^ (1 << j)]) % MOD;
			}
		}		
	}
	cout << dp[(1 << n) - 1] << endl;
}
