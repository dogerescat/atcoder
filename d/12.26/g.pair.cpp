#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n, m;  cin >> n >> m;
	vector<vector<int>> a(m);
	vector<vector<int>> pos(n);
	queue<int> que;	
	for(int i = 0; i < m; i++) {
		int k; cin >> k;
		for(int j = 0; j < k; j++) {
			int b; cin >> b;
			b--;
			a[i].push_back(b);
			pos[a[i][j]].push_back(i);
		}
	}
	vector<int> cnt(n);
	for(int i = 0; i < m; i++) {
		int t = a[i].back();
		cnt[t]++;
	}
	for(int i = 0; i < n; i++) {
		if(cnt[i] == 2) que.push(i);
	}
	int take = 0;
	while(!que.empty()) {
		int v = que.front(); que.pop();
		take++;
		for(auto i : pos[v]) {
			a[i].pop_back();
			if(a[i].size()) {
				int t = a[i].back();
				cnt[t]++;
				if(cnt[t] == 2) que.push(t);
			}
		}
	}
	if(take == n) cout << "Yes" << endl;
	else cout << "No" << endl;
}
