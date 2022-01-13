#include <iostream>
#include <queue>
using namespace std;
using ll = long long;

int main() {
	int n, m; cin >> n >> m;
	priority_queue<int> que;
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		que.push(a);
	}	
	while(m) {
		int v = que.top(); que.pop();
		que.push(v / 2);	
		--m;
	}
	ll ans = 0;
	while(!que.empty()) {
		int v = que.top(); que.pop();
		ans += v;
	}
	cout << ans << endl;
}
