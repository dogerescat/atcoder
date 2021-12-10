#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<vector<int>> x(n, vector<int> (3));
	for(int i = 0; i < n; i++) cin >> x[i][0] >> x[i][1] >> x[i][2];
	vector<vector<int>> dp(n+1, vector<int> (3));
	dp[0][0] = x[0][0];
	dp[0][1] = x[0][1];
	dp[0][2] = x[0][2];

	for(int i = 1; i < n; i++)	{
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
				if(j == k) continue;
				dp[i][j] = max(dp[i][j], dp[i-1][k] + x[i][j]);
			}
		}	
	}
	int ans = max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
	cout << ans << endl;
}
