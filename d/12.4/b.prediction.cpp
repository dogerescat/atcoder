#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < 3; i++) cin >> a[i];
	string t; cin >> t;
	vector<int> ctoi(256);
	ctoi['r'] = 2;
	ctoi['s'] = 0;
	ctoi['p'] = 1;
	int ans = 0;
	for(int i = 0; i < k; i++) {
		vector<int> x;
		for(int j = i; j < n; j+=k) {
			x.push_back(ctoi[t[j]]);
		}
		vector<int> dp(2);
		int pre = -1;
		for(auto nx : x) {
			vector<int> p(2);
			swap(dp, p);
			dp[0] = max(p[0], p[1]);
			if(nx == pre) {
				dp[1] = p[0] + a[nx]; 
			} else {
				dp[1] = max(p[0], p[1]) + a[nx];
			}
			pre = nx;
		}
		ans += max(dp[0], dp[1]);
	}
	cout << ans << endl;
}
