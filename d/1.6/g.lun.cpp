#include <iostream>
#include <set>
#include <queue>
using namespace std;
using ll = long long;

int main() {
	int k; cin >> k;
	set<ll> s;
	if(k <= 9) {
		cout << k << endl;
		return 0;
	}
	queue<ll> que;
	for(int i = 1; i <= 9; i++) que.push(i);
	while(s.size() < k) {
		ll v = que.front(); que.pop();
		s.insert(v);
		int m = v % 10;
		for(int i = -1; i <= 1; i++) {
			if(m + i < 0 || m + i > 9) continue;
			ll j = 10 * v + m + i;	
			que.push(j);
		}
	}
	int i = 1;
	for(auto ans : s) {
		if(i == k) cout << ans << endl;
		i++;
	}
}
