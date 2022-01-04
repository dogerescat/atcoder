#include <iostream>
#include <bitset>
using namespace std;

int main() {
	int n; cin >> n;
	bitset<100001> dp;
	dp[0] = 1;
	int T = 0;
	for(int i = 0; i < n; i++) {
		int t; cin >> t;
		T += t;
		dp |= dp << t;
	}
	int ans = T;
	for(int i = 0; i <= T; i++) {
		if(dp[i]) ans = min(ans, max(i, T - i));
	}
	cout << ans << endl;
}
