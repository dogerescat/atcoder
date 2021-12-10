#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
	int n, d; cin >> n >> d;
	vector<pair<int, int>> a(n);
	for(int i = 0; i < n; i++) {
		int r, l; cin >> l >> r;
		a[i].first = r;
		a[i].second = l;
	}
	sort(a.begin(), a.end());
	int ans = 0, x = -1; 
	for(int i = 0; i < n; i++) {
		int r = a[i].first;
		int l = a[i].second;
		if(l <= x) continue;
		x = r + d - 1;
		ans++;
	}
	cout << ans << endl;
}
