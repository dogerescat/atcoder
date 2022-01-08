#include <iostream>
#include <vector>
using namespace std;

struct Edge {
	int to, id;	
	Edge(int t, int i) : to(t), id(i){}
};

using Graph = vector<vector<Edge>>;

void dfs(Graph &G, vector<int> &ans, int v, int c = -1, int p = -1) {
	int k = 1;
	for(auto i : G[v]) {
		int u = i.to, id = i.id;	
		if(u == p) continue;
		if(c == k) k++;	
		ans[id] = k;
		k++;
		dfs(G, ans, u, ans[id], v);
	}
}

int main() {
	int n; cin >> n;
	Graph G(n);
	for(int i = 0; i < n-1; i++) {
		int a, b; cin >> a >> b;
		--a, --b;
		G[a].push_back(Edge(b, i));
		G[b].push_back(Edge(a, i));
	}
	vector<int> ans(n, -1);	
	dfs(G, ans, 0);	
	int mx = 0;
	for(int i = 0; i < n; i++) mx = max(mx, int(G[i].size()));
	cout << mx << endl;
	for(int i = 0; i < n-1; i++) cout << ans[i] << endl;
}
