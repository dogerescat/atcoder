#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
	int n, q; cin >> n >> q;
	vector<ll> a(n+1);
	for(int i = 1; i <= n; i++) cin >> a[i];
	vector<ll> b(n+1);
	for(int i = 1; i <= n; i++) {
		b[i] += (b[i-1] + a[i] - a[i-1] - 1);
	}
	for(int i = 0; i < q; i++) {
		ll k; cin >> k;
		int index = lower_bound(b.begin(), b.end(), k) - b.begin();
		ll ans = a[index-1] + (k - b[index-1]);
		cout << ans << endl;
	}
}
