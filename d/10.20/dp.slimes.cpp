#include <bits/stdc++.h>
using namespace std;

using ll = long long;

template<class T> void chmin(T &a, T b) {
	if(a > b) a = b;
}
const ll INF = 1001001001001001;


ll func(vector<vector<ll>> &dp, vector<ll> &a, int l, int r) {
	if(dp[l][r] != INF) return dp[l][r]; 
	if(r - l == 1) return dp[l][r] = 0;
	ll res = INF;
	for(int m = 1; m < r-l; m++) {
		chmin(res, func(dp, a, l, l + m) + func(dp, a, m+l, r));
	}
	return dp[l][r] = res + a[r] - a[l];
}

int main() {
	int n; cin >> n;
	vector<ll> a(n);
	vector<ll> b(n+1);
	vector<vector<ll>> dp(n+1, vector<ll>(n+1, INF));
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) {
		b[i] = b[i-1] + a[i-1];
	}
	cout << func(dp, b , 0, n) << endl;
}
