#include <iostream>
#include <queue>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	int q; cin >> q;
	priority_queue<ll, vector<ll>, greater<ll>> que;
	vector<ll> ans;
	ll sum = 0;
	for(int i = 0; i < q; i++) {
		int p, x; cin >> p;
		if(p == 1) {
			cin >> x;
			que.push(x-sum);
		} else if(p == 2) {
			cin >> x;
			sum += x;
		} else {
			ll t = que.top();
			ans.push_back(t+sum);
			que.pop();
		}
	}
	for(auto i : ans) {
		cout << i << endl;
	}
}
