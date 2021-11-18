#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	int n; cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll ans = 1001001001001001001;
	ll total = 0;
	bool fugo = true;
	ll cnt = 0;
	for(int i = 0; i < n; i++) {
		total += a[i];
		if(fugo) {
			if(total <= 0) {
				cnt += 1 - total;
				total = 1;
			}
		} else {
			if(total >= 0) {
				cnt += 1 + total;
				total = -1;
			}
		}
		fugo = !fugo;
	}
	ans = min(ans, cnt);
	cnt = 0;
	fugo = false;
	total = 0;
	for(int i = 0; i < n; i++) {
		total += a[i];
		if(fugo) {
			if(total <= 0) {
				cnt += 1 - total;
				total = 1;
			}
		} else {
			if(total >= 0) {
				cnt += 1 + total;
				total = -1;
			}
		}
		fugo = !fugo;
	}
	ans = min(ans, cnt);
	cout << ans << endl;
}
