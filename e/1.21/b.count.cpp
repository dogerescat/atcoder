#include <iostream>
#include <vector>
#include <map>
using namespace std;
using ll = long long;

int main() {
	int n; ll k; cin >> n >> k;
	vector<ll> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<ll> s(n+1);
	for(int i = 0; i < n; i++) s[i+1] = s[i] + a[i];
	map<ll, int> mp;
	ll ans = 0;
	for(int i = 0; i <= n; i++) {
		ans += mp[s[i]];	
		mp[s[i] + k]++;
	}
	cout << ans << endl;
}
