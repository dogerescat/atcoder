#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

ll func(ll x, ll n) {
	ll res = 1;
	while(n) {
		if(n & 1) res = res * x % MOD;
		x = x * x % MOD;
		n >>= 1;
	}
	return res;
}

ll func2(ll ab, ll b) {
	ll x = 1, y = 1;
	for(ll i = 0; i < b; i++) {
		x = x * (ab - i) % MOD;
		y = y * (i + 1) % MOD;
	}
	return x * func(y, MOD-2) % MOD;
}

int main() {
	ll x, y; cin >> x >> y;
	if((x+y) % 3) {
		cout << 0 << endl;
		return 0;
	}
	ll n = (x+y)/3;
	x -= n; y -= n;
	if(x < 0 || y < 0) {
		cout << 0 << endl;
		return 0;
	}
	ll ans = func2(x+y, x);	
	cout << ans << endl;
}
