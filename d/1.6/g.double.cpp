#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

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
	que.push(0);
	vector<int> dist(n, -1);
	dist[0] = 0;
	while(!que.empty()) {
		int v = que.front(); que.pop();
		for(auto i : G[v]) {
			if(dist[i] != -1) continue;
			dist[i] = v+1;
			que.push(i);
		}
	}
	cout << "Yes" << endl;
	for(int i = 1; i < n; i++) {
		cout << dist[i] << endl;
	}	
}
