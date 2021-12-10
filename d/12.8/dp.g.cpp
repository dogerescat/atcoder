#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

void ts(Graph &G, vector<int> &seen, vector<int> &order, int v) {
	seen[v] = 1;		
	for(auto i : G[v]) {
		if(seen[i]) continue;
		ts(G, seen, order, i);
	}
	order.push_back(v);
}

int main() {
	int n, m; cin >> n >> m;
	Graph G(n);
	for(int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		x--, y--;
		G[x].push_back(y);
	}
	vector<int> seen(n);
	vector<int> order;
	for(int i = 0; i < n; i++) {
		if(seen[i]) continue;
		ts(G, seen, order, i);
	}
	reverse(order.begin(), order.end());
	vector<int> l(n);
	for(auto i : order) {
		for(auto j : G[i]) {
			l[j] = max(l[j], l[i]+1);
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		ans = max(ans, l[i]);
	}
	cout << ans << endl;
}
