#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 1000000;
const int INF = 1001001001;

int main() {
	int a, n; cin >> a >> n;
	vector<int> dist(MAX, INF);	
	queue<int> que;
	auto push = [&](int v, int d) {
		if(dist[v] != INF) return;
		que.push(v);
		dist[v] = d;
		que.push(v);
	};
	push(1, 0);
	while(!que.empty()) {
		int v = que.front(); que.pop();
		if((long long)a * v <= MAX) push(a*v, dist[v] + 1);
		if(v >= 10 && v % 10 != 0) {
			string s = to_string(v);	
			rotate(s.begin(), s.begin() + (s.size() - 1), s.end());
			push(stoi(s), dist[v] + 1);
		}
	}
	if(dist[n] == INF) cout << -1 << endl;
	else cout << dist[n] << endl;
}
