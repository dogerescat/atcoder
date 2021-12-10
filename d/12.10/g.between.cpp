#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
const int MOD = 998244353;

int main() {
	ll n; cin >> n;
	vector<ll> a(n);
	vector<ll> b(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	const int M = 3001;
	vector<ll> dp(M);
	dp[0] = 1;
	for(int i = 0; i < n; i++) {
		vector<ll> p(M);
		swap(dp, p);
		for(int j = 1; j < M; j++) p[j] = (p[j] + p[j-1]) % MOD;
		for(int j = 0; j < M; j++) {
			if(a[i] <= j && b[i] >= j) {
				dp[j] = (dp[j] + p[j]) % MOD; 
			}
		}
	}
	
	ll ans = 0;
	for(int i = 0; i < M; i++) ans = (ans + dp[i]) % MOD;
	cout << ans << endl;
}
