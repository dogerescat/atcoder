#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	ll ans = 0;
	ll s = 0, b = 0;
	ll max_b = 0;
	for(int i = 0; i < n; i++) {
		b += a[i];
		max_b = max(max_b, b);
		ans = max(ans, max_b + s);
		s += b;
	}
	cout << ans << endl;
}
