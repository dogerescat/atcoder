#include <iostream>
#include <vector>
#include <set>
using namespace std;
using Graph = vector<set<int>>;

vector<int> ans;
void dfs(Graph &G, int v, int prev) {
	ans.push_back(v+1);
	for(auto i : G[v]) {
		if(i == prev) continue;	
		dfs(G, i, v);
		ans.push_back(v+1);
	}
}

int main() {
	int n; cin >> n;
	Graph G(n);
	for(int i = 0; i < n-1; i++) {
		int a, b; cin >> a >> b;
		--a, --b;
		G[a].insert(b);
		G[b].insert(a);
	}
    dfs(G, 0, -1);
	for(auto i : ans) {
		cout << i << " ";
	}
	cout << endl;
}
