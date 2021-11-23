#include <iostream>

using namespace std;
using ll = long long;

int main() {
	ll n; cin >> n;
	ll ans = 0;
	for(ll a = 1; a * a * a <= n; a++) {
		for(ll b = a; a * b * b <= n; b++) {
			ll c = n / (a * b);
			ans += c - b + 1;
		}	
	}
	cout << ans << endl;
}
