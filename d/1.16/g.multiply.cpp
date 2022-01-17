#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

const int INF = 1e9;

int dfs(int n, int a, map<int, int> &dp) {
	if(n == 1) return dp[n];
	if(dp[n]) return dp[n];
	dp[n] = INF;
	if(!(n % a)) dp[n] = min(dp[n], dfs(n/a, a, dp) + 1);	
	if(n > 9) {
		string s = to_string(n);		
		if(s[1] != '0') {
			int i = stoi(s.substr(1) + s[0]);
			dp[n] = min(dp[n], dfs(i, a, dp) + 1);
		}
	}
	return dp[n];
}

int main() {
	int a, n; cin >> a >> n;
	map<int, int> dp;
	dp[1] = 0;
	cout << (dfs(n, a, dp) != INF ? dp[n] : -1) << endl;
}
