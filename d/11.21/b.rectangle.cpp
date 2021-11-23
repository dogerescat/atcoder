#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int main() {
	int n; cin >> n;
	vector<pair<int, int>> a(n);
	set<pair<int, int>> s;
	for(int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		a[i].first = x;
		a[i].second = y;
		s.insert(make_pair(x, y));	
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			pair<int, int> p1 = {a[i].first, a[j].second};
			pair<int ,int> p2 = {a[j].first, a[i].second};
			if(a[i] == p1 || a[i] == p2 || a[j] == p1 || a[j] == p2) continue;
			if(s.count(p1) && s.count(p2)) ans++;
		} 
	}
	cout << ans/2 << endl;
}
