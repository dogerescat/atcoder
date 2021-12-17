#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

void f(Graph &G, vector<int> &seen, int v, int prev, bool &ok) {
	if(G[v].size() >= 3) ok = false;	
	if(seen[v]) ok = false;
	seen[v] = 1;
	for(auto i : G[v]) {
		if(prev == i) continue;
		f(G, seen, i, v, ok);	
	}
}
int main() {
	int n, m; cin >> n >> m;
	Graph G(n);
	for(int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		--a, --b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	vector<int> seen(n);
	bool ok = true;
	f(G, seen, 0, -1, ok);
	if(ok) cout << "Yes" << endl;
	else cout << "No" << endl;
}
