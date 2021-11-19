#include<iostream>
#include <vector>
using namespace std;

const int INF = 1001001001;
template<class T> void chmin(T &a, T b) {
	if(a > b) a = b;
}

int main() {
	int n, m; cin >> n >> m;
	vector<vector<int>> dp(n, vector<int> (n, INF));
	vector<int> a;
	for(int i = 0; i < m; i++) {
		int u, v, l; cin >> u >> v >> l;
		u--; v--;
		dp[u][v] = l;
		dp[v][u] = l;
		if(v == 0) a.push_back(u);
		if(u == 0) a.push_back(v);
	}
	for(int i = 0; i < n; i++) dp[i][i] = 0;

	for(int k = 1; k < n; k++) {
		for(int i = 1; i < n; i++) {
			for(int j = 1; j < n; j++) {
				chmin(dp[i][j], dp[i][k] + dp[k][j]);
			}
		}
	}
	int ans = INF;
	for(int i = 0; i < a.size(); i++) {
		for(int j = i + 1; j < a.size(); j++) {
			chmin(ans, dp[0][a[i]] + dp[0][a[j]] + dp[a[i]][a[j]]);
		}
	}
	if(ans == INF) cout << -1 << endl;
	else cout << ans << endl;
}
