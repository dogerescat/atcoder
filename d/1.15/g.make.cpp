#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> a[i][j];
	vector<pair<pair<int, int>, pair<int, int>>> ans;	
	for(int i = 0; i < h; i++) for(int j = 0; j < w-1; j++) {
		if(a[i][j] % 2 == 0) continue;	
		a[i][j]--; a[i][j+1]++;
		ans.push_back({{i, j}, {i, j+1}});
	}
	for(int i = 0; i < h-1; i++) {
		if(a[i][w-1] % 2 == 0) continue;
		a[i][w-1]--; a[i+1][w-1]++;
		ans.push_back({{i, w-1}, {i+1, w-1}});
	}
	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++) {
		int x = ans[i].first.first+1;
		int y = ans[i].first.second+1;
		int xd = ans[i].second.first+1;
		int yd = ans[i].second.second+1;
		cout << x << " " << y << " " << xd << " " << yd << endl;
	}
}
