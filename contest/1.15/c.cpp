#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int n, q; cin >> n >> q;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	map<int, vector<int>> m;
	for(int i = 0; i < n; i++) {
		m[a[i]].push_back(i+1);
	}
	for(int i = 0; i < q; i++) {
		int x, k; cin >> x >> k;
		if(!m.count(x) || m[x].size() < k) cout << -1 << endl;
		else cout << m[x][k-1] << endl;
	}
}
