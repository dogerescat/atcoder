#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
using Grid = vector<vector<char>>;
typedef pair<int, int> P;

const int X[4] = {1, 0, -1, 0};
const int Y[4] = {0, 1, 0, -1};

int main() {
	int h, w; cin >> h >> w;
	Grid a(h+2, vector<char>(w+2, '#'));	
	int cnt = 0;
	for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++) {
		cin >> a[i][j];
		if(a[i][j] == '.') cnt++;
	}
	vector<vector<int>> dist(h+2, vector<int>(w+2, -1));
	queue<P> que;
	que.push(P(1, 1));
	dist[1][1] = 0;
	while(!que.empty()) {
		P p = que.front(); que.pop();
		for(int k = 0; k < 4; k++) {
			int x = p.first + X[k];
			int y = p.second + Y[k];
			if(a[x][y] == '#') continue;
			if(dist[x][y] != -1) continue;
			dist[x][y] = dist[p.first][p.second] + 1;
			que.push(P(x, y));
		}		
	}
	int ans = cnt - dist[h][w] - 1;
	if(dist[h][w] != -1) cout << ans << endl;
	else cout << -1 << endl;
}
