#include <iostream>
#include <vector>
using namespace std;

const int INF = 1001001001;

int main() {
	int n; cin >> n;
	vector<int> h(n);
	for(int i = 0; i < n; i++) cin >> h[i];
	vector<int> dp(n, INF);
	dp[0] = 0;
	for(int i = 1; i < n; i++) {
		dp[i] = min(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
		if(i >= 2) dp[i] = min(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
	}
	cout << dp[n-1] << endl;
}
