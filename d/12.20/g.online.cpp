#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<pair<ll, ll>> A;	
	for(int i = 0; i < n; i++) {
		ll a, b; cin >> a >> b;
		A.push_back(make_pair(a, 1));
		A.push_back(make_pair(a+b, 0));
	}
	sort(A.begin(), A.end());
	ll cnt = 0;
	ll pre_day = 0;
	vector<ll> ans(n+1);
	for(auto i : A) {
		ans[cnt] += i.first - pre_day;	
		if(i.second) cnt++;
		else cnt--;
		pre_day = i.first;
	}
	for(int i = 1; i <= n; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
}
