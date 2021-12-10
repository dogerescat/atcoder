#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<bool> dp(k+1);
	for(int i = 1; i <= k; i++) {
		for(int j = 0; j < n; j++) {
			if(i - a[j] >= 0) dp[i] = dp[i] | !dp[i-a[j]];
		}
	}
	if(dp[k]) cout << "First" << endl;
	else cout << "Second" << endl;
}
