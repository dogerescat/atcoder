#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
using P = pair<int ,int>;

int main() {
	int n, m, q; cin >> n >> m >> q;
	vector<int> W(n);	
	vector<int> V(n);
	for(int i = 0; i < n; i++) cin >> W[i] >> V[i];
	vector<int> X(m);
	for(int i = 0; i < m; i++) cin >> X[i];
	for(int qi = 0; qi < q; qi++) {
		int l, r; cin >> l >> r;
		--l, --r;
		vector<int> a;
		for(int i = 0; i < m; i++) if(i < l || r < i) a.push_back(X[i]);
		sort(a.begin(), a.end());
		vector<bool> used(n);
		int ans = 0;
		for(auto as : a) {
			P best(-1, -1);				
			for(int i = 0; i < n; i++) {
				if(used[i]) continue;
				if(W[i] > as) continue;
				best = max(best, P(V[i], i));
			}
			int i = best.second;
			if(i == -1) continue;
			used[i] = true;
			ans += V[i];
		}
		cout << ans << endl;
	}
}
