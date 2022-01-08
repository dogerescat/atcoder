#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
typedef pair<int, int> P;

const int x[4] = {1, 0, -1, 0};
const int y[4] = {0, 1, 0, -1};

int main() {
	int H, W; cin >> H >> W;
	vector<vector<char>> A(H+2, vector<char> (W+2, '#'));
	for(int i = 1; i <= H; i++) for(int j = 1; j <= W; j++) cin >> A[i][j];
	int ans = 0;
	for(int sh = 1; sh <= H; sh++) for(int sw = 1; sw <= W; sw++) {
		for(int th = 1; th <= H; th++) for(int tw = 1; tw <= W; tw++) {
			if(A[sh][sw] == '#' || A[th][tw] == '#') continue;
			queue<P> que;
			vector<vector<int>> dist(H+2, vector<int> (W+2, -1));
			que.push(make_pair(sh, sw));
			dist[sh][sw] = 0;
			while(!que.empty()) {
				P v = que.front(); que.pop();
				int h = v.first, w = v.second;
				for(int k = 0; k < 4; k++) {
					int nh = h + y[k], nw = w + x[k];	
					if(dist[nh][nw] != -1 || A[nh][nw] == '#') continue;
					dist[nh][nw] = dist[h][w] + 1;
					que.push(make_pair(nh, nw));
				}
			}
			ans = max(ans, dist[th][tw]);	
		}
	}
	cout << ans << endl;
}
