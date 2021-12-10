#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n; 
	vector<double> p(n);
	for(int i = 0; i < n; i++) cin >> p[i];
	vector<vector<double>> dp(n+1, vector<double> (n+1));
	dp[0][0] = 1;
	for(int i = 1; i <= n; i++) for(int j = 0; j < i+1; j++) {
		if(j > 0) dp[i][j] = dp[i-1][j] * (1 - p[i-1]) + dp[i-1][j-1] * p[i-1]; 
		else dp[i][j] = dp[i-1][j] * (1 - p[i-1]); 
	} 
	double ans = 0;
	for(int i = 0; i <= n; i++) {
		if(i > n/2) ans += dp[n][i];
	}
	cout << ans << endl;
}
