#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;
void ts(Graph &Gag, vector<int> &seen, vector<int> &order, int v) {
	seen[v] = 1;	
	for(auto i : Gag[v]) {
		if(seen[i] == 1) continue;
		ts(Gag, seen, order, i);
	}
	order.push_back(v);
}

int main() {
	int n, a, b, m; cin >> n >> a >> b >> m;
	--a, --b;
	Graph G(n);
	for(int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		--x, --y;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	Graph Gag(n);
	queue<int> que;
	vector<int> dist(n, -1);
	que.push(a);
	dist[a] = 0;
	while(!que.empty()) {
		int v = que.front();
		que.pop();
		for(auto i : G[v]) {
			if(dist[i] == -1) {
				dist[i] = dist[v] + 1;
				que.push(i);
				Gag[v].push_back(i);
			} else if(dist[i] == dist[v] + 1) {
				Gag[v].push_back(i);
			}
		}
	}
	vector<int> order;
	vector<int> seen(n);
	for(int i = 0; i < n; i++) {
		if(seen[i]) continue;
		ts(Gag, seen, order, i);
	}
	reverse(order.begin(), order.end());
	vector<int> ans(n);
	ans[order[0]] = 1;
	for(int i = 0; i < n; i++) {
		for(auto j : Gag[order[i]]) {
			ans[j] = (ans[order[i]] + ans[j]) % MOD;
		}
	}
	cout << ans[b] << endl;
}
