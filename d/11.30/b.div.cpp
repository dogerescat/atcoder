#include <iostream>
#include <map>
using namespace std;
using ll = long long;

int main() {
	ll n; cin >> n;
	map<ll, int> P;
	for(ll i = 2; i * i <= n; i++) {
		if(n % i != 0) continue;
		int cnt = 0;
		while(n % i == 0) {
			cnt++;
			n /= i;
		}
		P[i] = cnt;	
	}
	if(n != 1) P[n] = 1;
	ll ans = 0;
	for(auto i : P) {
		int j = 1;
		int x = i.second;
		ll t = 1;
		while(j <= x) {
			x -= j;
			j++;
			ans++;
		}
	}
	cout << ans << endl;
}
