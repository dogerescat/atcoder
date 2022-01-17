#include <iostream>
using namespace std;
using ll = long long;

int main() {
	int n, m; cin >> n >> m;
	int ans = 1;
	for(int i = 1; i * i <= m; i++) {
		if(m % i != 0) continue;
		int j = m / i;
		if((ll)i * n <= m) ans = max(ans, i);
		if((ll)j * n <= m) ans = max(ans, j);
	}
	cout << ans << endl;
}
