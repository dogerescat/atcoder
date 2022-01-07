#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll g(ll i) {
	ll res = i * (i+1) / 2;
	return res;		
}
int main() {
	ll n; cin >> n;
	ll ans = 0;
	for(ll i = 1; i <= n; i++) {
		ans += i * g(n / i);
	}
	cout << ans << endl;
}
