#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll n, k; cin >> n >> k;
	ll ans = 0;
	for(ll b = k+1; b <= n; b++) {
		ll x = n / b, y = n % b;
		ans += x * (b - k);
		if(y >= k) ans += y - k + 1;
	}
	if(!k) ans -= n;
	cout << ans << endl;
}
