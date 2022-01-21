#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

bool dfs(Graph &G, vector<int> &a, int v, int pre = -1) {
	bool ok = true;
	if(a[v]) return ok = false; 
	else a[v] = 1;
	for(auto i : G[v]) {
		if(i == pre) continue;
		ok = dfs(G, a, i, v);
	}
	return ok;
}
int main() {
	int n, m; cin >> n >> m;
	vector<vector<int>> G(n);	
	vector<int> cnt(n);
	for(int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		--a, --b;
		cnt[a]++, cnt[b]++;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	for(int i = 0; i < n; i++) if(cnt[i] >= 3) {
		cout << "No" << endl;
		return 0;
	}
	bool ok = true;
	vector<int> a(n);		
	for(int i = 0; i < n; i++) {
		if(a[i]) continue;
		if(!dfs(G, a, i)) ok = false;
	}
	if(ok) cout << "Yes" << endl;
	else cout << "No" << endl;
}
