#include <iostream>
using namespace std;
using ll = long long;

ll calc(ll x) {
	ll res = 0;
	x++;
	for(int i = 0; i < 50; i++) {
		ll loop = 1LL << (i+1);
		ll cnt = (x / loop) * (loop / 2);
		cnt += max(0LL, (x % loop) - (loop / 2));
		if(cnt % 2 == 1) {
			res += 1LL << i;
		}
	}
	return res;
}
int main() {
	ll a, b; cin >> a >> b;
	ll ans = calc(b) ^ calc(a-1);
	cout << ans << endl;
}
