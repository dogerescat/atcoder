#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<ll> x(n);
	ll X = 0;
	for(int i = 0; i < n; i++) {
		ll a, b; cin >> a >> b;
		x[i] = a + a + b;
		X -= a;
	}
	sort(x.begin(), x.end());
	int ans = 0;
	while(X <= 0) {
		X += x.back();
		x.pop_back();
		ans++;
	}
	cout << ans << endl;
}
