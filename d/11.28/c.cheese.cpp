#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	ll n, w; cin >> n >> w;
	vector<pair<ll, ll>> a(n);
	for(int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		a[i].first = x;
		a[i].second = y;
	}
	sort(a.begin(), a.end(), greater<pair<ll, ll>>());
	ll ans = 0;
	for(int i = 0; i < n; i++) {
		ans += min(w, a[i].second) * a[i].first;
		w -= a[i].second;
		if(w <= 0) break;
	}
	cout << ans << endl;
}
