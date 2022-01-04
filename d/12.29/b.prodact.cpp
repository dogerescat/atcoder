#include <iostream>
#include <vector>
#include <map>
using namespace std;
using ll = long long;

void dfs(vector<map<ll, ll>> &m, ll x, vector<ll> cnt, int n, int d, ll y, ll &ans) {
	if(d == n) {
		if(y == x) {
			ll total = 1;
			for(int i = 0; i < n; i++) {
				total *= cnt[i];	
			}	
			ans += total;
		}
		return;
	}	
	for(auto i : m[d]) {
		if(y > x / i.first) continue;
		cnt[d] = i.second;
		dfs(m, x, cnt, n, d+1, y * i.first, ans);	
	}
}
int main() {
	ll n, x; cin >> n >> x;
	vector<map<ll, ll>> m(n);
	for(int i = 0; i < n; i++) {
		int l; cin >> l;
		for(int j = 0; j < l; j++) {
			ll a; cin >> a;
			m[i][a]++;
		}
	}
	vector<ll> cnt(n);	
	ll ans = 0;
	dfs(m, x, cnt, n, 0, 1, ans);
	cout << ans << endl;
}
