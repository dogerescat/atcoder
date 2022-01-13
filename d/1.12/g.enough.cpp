#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	int n; ll k; cin >> n >> k;
	vector<ll> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<ll> A(n+1);	
	for(int i = 1; i <= n; i++) A[i] += A[i-1] + a[i-1];
	ll ans = 0;
	for(int i = 0; i <= n; i++) {
		ll ite = lower_bound(A.begin(), A.end(), k+A[i]) - A.begin();	
		ans += n + 1 - ite;
	}
	cout << ans << endl;
}
