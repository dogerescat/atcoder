#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
	ll n; cin >> n;
	while(n % 2 == 0) n /= 2;
	ll sq = sqrt(n);
	ll ans = 0;
	for(int i = 1; i <= sq; i++) if(n % i == 0) ans += 2;
	if(sq * sq == n) ans--;
	cout << ans * 2 << endl;
}
