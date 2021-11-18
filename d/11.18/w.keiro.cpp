#include <iostream>
using namespace std;
using ll = long long;
const int MOD = 1000000007;

ll powmod(ll x, ll n) {
	ll res = 1;
	while(n) {
		if(n & 1) res = res * x % MOD;
		x = x * x % MOD;
		n >>= 1;
	}
	return res;
}
ll solve(ll a, ll b) {
	return a * powmod(b, MOD-2) % MOD;
}

int main() {
	ll w, h; cin >> w >> h;
	--w, --h;
	ll r = w + h;
	ll a = 1;
	for(int i = 0; i < r-w; i++) {
		a = a * (r-i) % MOD;	
	}
	ll b = 1;
	for(int i = 0; i < h; i++) {
		b = b * (h-i) % MOD;
	}
	cout << solve(a, b) << endl;
}

