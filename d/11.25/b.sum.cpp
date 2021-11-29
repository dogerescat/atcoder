#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	vector<ll> b(n);
	b[0] = a[0];
	for(int i = 1; i < n; i++) b[i] = b[i-1] + a[i];
	ll ans = 0;
	for(int i = 0; i < n-1; i++) {
		ans += (b[n-1] - b[i]) - a[i] * (n-1-i);
	}
	cout << ans << endl;
}
