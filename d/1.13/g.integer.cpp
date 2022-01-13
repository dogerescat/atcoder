#include <iostream>
#include <queue>
#include <utility>
using namespace std;
using ll = long long;

int main() {
	int n, m; cin >> n >> m;
	priority_queue<pair<int, int>> que;
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		que.push(make_pair(a, 1));	
	}
	for(int i = 0; i < m; i++) {
		int b, c; cin >> b >> c;
		que.push(make_pair(c, b));
	}
	ll ans = 0;
	for(int i = 0; i < n; i++) {
		auto p = que.top(); que.pop();
		ans += p.first;	
		if(p.second != 1) {
			p.second--;
			que.push(p);
		}
	}
	cout << ans << endl;
}
