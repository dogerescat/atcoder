#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s, t; cin >> s >> t;
	int n = s.size();
	int m = t.size();
	vector<vector<int>> dp(n+1, vector<int> (m+1));	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(s[i-1] == t[j-1]) dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
			dp[i][j] = max(dp[i][j], dp[i-1][j]);
			dp[i][j] = max(dp[i][j], dp[i][j-1]);
		}
	}
	string ans;
	int i = n;
	int j = m; 
	while(i && j) {
		if(dp[i][j] == dp[i-1][j]) {
			i--;	
		} else if(dp[i][j] == dp[i][j-1]) {
			j--;
		} else {
			ans.push_back(s[i-1]);
			i--;
			j--;
		}	
	}
	reverse(ans.begin(), ans.end());
	cout << ans << endl;
}
