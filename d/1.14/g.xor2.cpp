#include <iostream>
using namespace std;
using ll = long long;

ll calc(ll x) {
	ll cnt = (x+1) / 2;
	ll res = cnt % 2;
	if(x % 2 == 0) res ^= x;
	return res;
}
int main() {
	ll a, b; cin >> a >> b;
	ll ans = calc(b) ^ calc(a-1);	
	cout << ans << endl;
}
