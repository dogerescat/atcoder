#include <iostream>
#include <vector>
#include <map>
using namespace std;
using ll = long long;

int main() {
	int n; ll k; cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<ll> s(n+1); 
	for(int i = 0; i < n; i++) s[i+1] = s[i] + a[i];
	map<ll, ll> m; 
	ll ans = 0;
	for(int r = 1; r <= n; r++) {
		m[s[r-1]]++;
		ans += m[s[r] - k];	
	}
	cout << ans << endl;
}
