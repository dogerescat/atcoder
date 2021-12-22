#include <iostream>
#include <vector>
using namespace std;
const int INF = 1001001001;
int main() {
	int n; cin >> n;
	int x, y; cin >> x >> y;
	vector<vector<vector<int>>> dp(n+1, vector<vector<int>> (x+1, vector<int> (y+1, INF)));
	dp[0][0][0] = 0;
	for(int k = 1; k <= n; k++) {
		int a, b; cin >> a >> b;
		for(int i = 0; i <= x; i++) {
			for(int j = 0; j <= y; j++) {
				dp[k][min(i+a, x)][min(j+b, y)] = min(dp[k][min(i+a, x)][min(j+b, y)], dp[k-1][i][j] + 1);
				dp[k][i][j] = min(dp[k][i][j], dp[k-1][i][j]);
			}	
		}
	}
	if(dp[n][x][y] == INF) cout << -1 << endl;	
	else cout << dp[n][x][y] << endl;
}
