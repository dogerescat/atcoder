#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll a, b, n;
	cin >> a >> b >> n;
	ll x = n;
	if(x >= b-1) x = b-1;
	// ans = a * x / b - a * (x / b);
	ll ans = a * (x % b) / b;
	cout << ans << endl;
}
