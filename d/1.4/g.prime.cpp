#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	int n; ll C; cin >> n >> C; 
	vector<ll> a(n);
	vector<ll> b(n);
	vector<ll> c(n);
	for(int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];
	vector<pair<int, ll>> A;
	for(int i = 0; i < n; i++) {
		A.push_back(make_pair(a[i], c[i]));
		A.push_back(make_pair(b[i]+1, -c[i]));
	}
	sort(A.begin(), A.end());
	int pre = 0;
	ll cnt = 0;
	ll ans = 0;
	for(auto ap : A) {
		int day = ap.first - pre;
		ans += min(C, cnt) * day;
		cnt += ap.second;	
		pre = ap.first;
	}
	cout << ans << endl;
}
