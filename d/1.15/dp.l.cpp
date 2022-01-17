#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
typedef vector<vector<ll>> vvl;
typedef vector<vector<bool>> vvb;

const ll INF = 1001001001001001;

template<class T> void chmax(T &a, T b) {
	if(a < b) a = b;
}

template<class T> void chmin(T &a, T b) {
	if(a > b) a = b;
}

ll f(vvl &dp, vvb &flag, vector<ll> &a, int n, int l, int r) {
	if(l > r) return 0;
	if(flag[l][r]) return dp[l][r];
	flag[l][r] = true;
	ll res = 0;
	int diff = n - (r - l + 1);
	if(diff % 2 == 0) {
		res = -INF;
		chmax(res, f(dp, flag, a, n, l+1, r) + a[l]);
		chmax(res, f(dp, flag, a, n, l, r-1) + a[r]);
	} else {
		res = INF;
		chmin(res, f(dp, flag, a, n, l+1, r) - a[l]);
		chmin(res, f(dp, flag, a, n, l, r-1) - a[r]);
	}
	return dp[l][r] = res;
}
int main() {
	int n; cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vvl dp(n+1, vector<ll> (n+1));
	vvb flag(n+1, vector<bool>(n+1));
	cout << f(dp, flag, a, n, 0, n-1) << endl;;
}
