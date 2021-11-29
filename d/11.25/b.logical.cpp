#include <iostream>
#include <vector>
#include <string>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<string> s(n);
	for(int i = 0; i < n; i++) cin >> s[i];
	vector<ll> dp(2, 1);
	for(int i = 0; i < n; i++) {
		vector<ll> p(2);
		swap(dp, p);
		for(int j = 0; j < 2; j++) for(int x = 0; x < 2; x++) {
			int nj = j;
			if(s[i] == "AND") nj &= x;
			else nj |= x;
			dp[nj] += p[j];
		}
	}
	cout << dp[1] << endl;
}
