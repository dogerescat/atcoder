#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<pair<ll, ll>> p(n);
	for(int i = 0; i < n; i++) {
		ll a, b; cin >> a >> b;
		p[i].second = a;
		p[i].first = b;
	}
	ll time = 0;
	sort(p.begin(), p.end());
	for(int i = 0; i < n; i++) {
		time += p[i].second;
		if(p[i].first < time) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}
