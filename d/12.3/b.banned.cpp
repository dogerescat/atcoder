#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<ll> a(n+1);
	vector<int> b(n+1);
	for(int i = 0; i < n; i++) {
		cin >> b[i];
		a[b[i]]++;
	}
	ll ans = 0;
	for(int i = 0; i <= n; i++) {
		if(a[i] < 2) continue;
		ans += (a[i] * (a[i] - 1))/ 2;
	}
	for(int i = 0; i < n; i++) {
		if(a[b[i]] < 2) {
			cout << ans << endl;
			continue;
		}
		ll x = (a[b[i]] * (a[b[i]] - 1)) / 2;
		ans -= x;
		if(a[b[i]] - 1 < 2) cout << ans << endl;
		else {
			ll y = ((a[b[i]] - 1) * (a[b[i]] - 2)) / 2;
			cout << ans + y << endl;
		}
		ans += x;
	}

}
