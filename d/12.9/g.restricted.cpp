#include <iostream>
#include <queue>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	int n, m; cin >> n >> m;
	Graph G(n);
	vector<int> deg(n);
	for(int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		--a, --b;
		G[a].push_back(b);
		deg[b]++;
	}
	priority_queue<int, vector<int>, greater<int>> que;
	for(int i = 0; i < n; i++) if(deg[i] == 0) que.push(i);
	vector<int> ans;
	while(!que.empty()) {
		int v = que.top();	
		que.pop();
		ans.push_back(v);
		for(auto i : G[v]) {
			deg[i]--;
			if(deg[i] == 0) que.push(i);
		}
	}
	if(ans.size() == n) {
		for(auto i : ans) {
			cout << i+1 << " ";
		}
		cout << endl;
	} else cout << -1 << endl;
}
