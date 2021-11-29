#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll x, y, a, b; cin >> x >> y >> a >> b;
	ll ans = 0;
	ll X = x;
	while(y/a > X && X + b > X * a) {
		X *= a;	
		ans++;
	}
	ll Y = (y - X - 1);
	ans += Y / b;
	cout << ans << endl;
}
