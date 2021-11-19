#include<iostream>
#include<vector>
#include<queue>

using namespace std;

const int MOD = 1000000007;
using Graph = vector<vector<int>>;

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
	vector<int> dist(n, -1);
	dist[a] = 0; 
	vector<int> value(n);
	value[a] = 1;
	queue<int> que;
	que.push(a);
	while(!que.empty()) {
		int v = que.front();
		que.pop();
		if(v == b) break;
		for(auto i : G[v]) {
			if(dist[i] == -1) {
				que.push(i);
				value[i] = (value[i]+value[v]) % MOD;
				dist[i] = dist[v]+1;
			} else if(dist[i] == dist[v]+1) {
				value[i] = (value[i]+value[v]) % MOD;
			}
		}
	}
	cout << value[b] << endl;
}
