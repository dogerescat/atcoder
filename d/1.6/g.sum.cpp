#include <iostream>
using namespace std;
using ll = long long;
const int MOD = 1000000007;

ll sum(ll l, ll r) {
	return (l+r) * (r-l+1) / 2;
}

int main() {
	int n, k; cin >> n >> k;
	ll ans = 0;
	for(int i = k; i <= n+1; i++) {
		ll l = sum(0, i-1); 
		ll r = sum(n-i+1, n);
		ans = (ans + r - l + 1) % MOD;
	}	
	cout << ans << endl;
}
