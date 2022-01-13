#include <iostream>
#include <vector>
#include <utility>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	return !b ? a : gcd(b, a%b);
}
vector<pair<ll, int>> factorize(ll n) {
	vector<pair<ll, int>> res;
	for(int i = 2; i * i <= n; i++) {
		if(n % i) continue;
		res.push_back(make_pair(i, 0));
		while(n % i == 0) {
			n /= i;
			res.back().second++;
		}
		
	}
	if(n != 1) res.push_back(make_pair(n, 1));
	return res;
}

int main() {
	ll a, b; cin >> a >> b;
	ll g = gcd(a, b);	
	ll ans = factorize(g).size() + 1;
	cout << ans << endl;
}
