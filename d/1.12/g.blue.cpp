#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

const ll MOD = 1e9+7;

vector<vector<ll>> C(5010, vector<ll>(5010));
void init() {
	C[0][0] = 1;
	for(ll i = 0; i < 5000; i++) {
		for(ll j = 0; j <= i; j++) {
			C[i+1][j] = (C[i+1][j] + C[i][j]) % MOD;	
			C[i+1][j+1] = (C[i+1][j+1] + C[i][j]) % MOD;
		}
	}
}
ll comb(ll x, ll y) {
	return C[x][y];	
}

ll fd(ll x, ll y) {
	return comb(x+y-1, y-1);	
}

ll f(ll x, ll y) {
	if(x < y) return 0;
	if(!x && !y) return 1;
	if(y < 1) return 0;
	return fd(x-y, y);	
}
int main() {
	init();
	ll n, k; cin >> n >> k;
	for(ll i = 1; i <= k; i++)	{
		ll blue = f(k, i);	
		ll red = 0;
		{
			red = (red + f(n-k, i-1)) % MOD;
			red = (red + f(n-k, i)) % MOD;
			red = (red + f(n-k, i)) % MOD;
			red = (red + f(n-k, i+1)) % MOD;
		}
		ll ans = blue * red % MOD;
		cout << ans << endl;
	}
}
