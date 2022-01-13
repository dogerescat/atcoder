#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

void dfs(Graph &G, vector<int> &dist, int v, int pre = -1) {
	for(auto i : G[v]) {
		if(i == pre) continue;
		dist[i] += dist[v];
		dfs(G, dist, i, v);
	}
}
int main() {
	int n, q; cin >> n >> q;
	Graph G(n);
	for(int i = 0; i < n-1; i++) {
		int a, b; cin >> a >> b;
		--a, --b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	vector<int> dist(n);	
	for(int i = 0; i < q; i++) {
		int p, x; cin >> p >> x;
		p--;
		dist[p] += x;
	}
	dfs(G, dist, 0);
	for(int i = 0; i < n; i++) cout << dist[i] << endl;
}
