#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll x; cin >> x;
	ll ans = 2e18;
	for(int s = 1; s <= 9; s++) {
		for(int d = -9; d <= 9; d++) {
			ll a = 0;
			for(int i = s; i >= 0 && i <= 9; i += d) {
				a = a * 10 + i;
				if(x <= a) {
					ans = min(ans, a);
					break;
				}
			}
		}
	}
	cout << ans << endl;
}
