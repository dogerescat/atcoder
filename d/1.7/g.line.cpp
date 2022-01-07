#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	int n, x, y; cin >> n >> x >> y;
	Graph G(n);
	for(int i = 0; i < n-1; i++) {
		G[i].push_back(i+1);	
		G[i+1].push_back(i);
	}
	G[x-1].push_back(y-1);
	G[y-1].push_back(x-1);
	vector<vector<int>> a(n+1, vector<int> (n+1, -1));
	queue<int> que;
	for(int i = 0; i < n-1; i++) {
		que.push(i);
		a[i][i] = 0;
		while(!que.empty()) {
			int v = que.front(); que.pop();	
			for(auto j : G[v]) {
				if(a[i][j] != -1) continue;
				a[i][j] = a[i][v] + 1;
				que.push(j);
			}
		}
	}
	vector<int> ans(n);
	for(int i = 0; i < n; i++) for(int j = i+1; j < n; j++) {
		if(a[i][j] == -1) continue;
		ans[a[i][j]]++;
	}
	for(int i = 1; i < n; i++) cout << ans[i] << endl;
}
