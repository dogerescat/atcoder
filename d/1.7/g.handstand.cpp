#include <iostream>
#include <map>
#include <utility>
using namespace std;
using ll = long long;
typedef pair<int, int> P;

P func(int x) {
	int a = x % 10;
	int b = 0;
	while(x) {
		b = x;
		x /= 10;
	}
	return P(a, b);
}

int main() {
	int n; cin >> n;
	map<P, int> mp;
	for(int i = 1; i <= n; i++) {
		P p = func(i);		
		mp[p]++;
	}
	int ans = 0;
	for(auto p : mp) {	
		P q(p.first.second, p.first.first);
		ans += mp[q] * p.second;
	}
	cout << ans << endl;
}
