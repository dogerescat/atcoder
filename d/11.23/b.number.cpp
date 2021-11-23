#include <iostream>
#include <vector> 
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

const int MOD = 1000000007;
int main() {
	int n, m; cin >> n >> m;
	Graph G(n);
	for(int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		--a, --b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	queue<int> que;
	vector<int> dist(n, -1);
	que.push(0);
	dist[0] = 0;
	vector<int> vs;
	while(!que.empty()) {
		int v = que.front();
		que.pop();
		vs.push_back(v);
		for(auto i : G[v]) {
			if(dist[i] != -1) continue;
			dist[i] = dist[v] + 1;
			que.push(i);
		}
	}
	vector<int> dp(n);
	dp[0] = 1;
	for(auto i : vs) {
		for(auto j : G[i]) {
			if(dist[j] == dist[i]+1) {
				dp[j] = (dp[j] + dp[i]) % MOD;
			}
		}
	}
	cout << dp[n-1] << endl;
}
