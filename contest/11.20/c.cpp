#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<vector<int>> a(n, vector<int> (3));
	for(int i = 0; i < n; i++) for(int j = 0; j < 3; j++) cin >> a[i][j];
	vector<pair<int, int>> b(n);
	for(int i = 0; i < n; i++) {
		b[i].second = i;
		for(int j = 0; j < 3; j++) {
			b[i].first += a[i][j];	
		}
	}
	sort(b.begin(), b.end(), greater<pair<int, int>> ());
	vector<bool> ans(n);
	k--;
	for(int i = 0; i < n; i++) {
		if(i <= k) ans[b[i].second] = true;
		else if(b[k].first - b[i].first <= 300) ans[b[i].second] = true;
	}
	for(int i = 0; i < n; i++) {
		if(ans[i]) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
