#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	int n, q; cin >> n >> q;
	Graph G(n);
	for(int i = 0; i < n-1; i++) {
		int a, b; cin >> a >> b;
		--a, --b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	queue<int> que;
	vector<int> dist(n, -1);
	que.push(0);
	dist[0] = 0;
	while(!que.empty()) {
		int v = que.front(); que.pop();
		for(auto i : G[v]) {
			if(dist[i] != -1) continue;
			dist[i] = dist[v] + 1;
			que.push(i);
		}
	}
	
	for(int i = 0; i < q; i++) {
		int c, d; cin >> c >> d;
		--c, --d;
		int x = abs(dist[c] - dist[d]);
		if(x % 2 == 0) cout << "Town" << endl;
		else cout << "Road" << endl;
	}
}
