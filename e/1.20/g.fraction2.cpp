#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll n, k; cin >> n;
	for(ll i = 0; i <= n; i++)	{
		if(i * i <= n) k = i;
		else break;
	}
	ll ans = 0;
	for(ll i = 1; i <= k; i++) ans += ((n/i) - (n/(i+1))) * i;
	for(ll i = 1; i <= n / (k+1); i++) ans += (n / i);
	cout << ans << endl;
}
