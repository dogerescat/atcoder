#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int H, W; cin >> H >> W;
	vector<string> A(H);
	for(int i = 0; i < H; i++) cin >> A[i];
	vector<vector<int>> a(H, vector<int> (W));
	for(int i = 0; i < H; i++) {
		int cnt = 0;
		for(int j = 0; j < W; j++) {
			if(A[i][j] == '#') {
				cnt = 0;
				continue;
			} else {
				a[i][j] = cnt;
				cnt++;
			}
		}
		int m = 0;
		for(int j = W-1; j >= 0; j--) {
			if(A[i][j] == '#') {
				m = 0;
				continue;
			} else {
				m = max(m, a[i][j]);
				a[i][j] = m;
			}
		}
	}
	vector<vector<int>> b(H, vector<int> (W));
	for(int j = 0; j < W; j++) {
		int cnt = 0;	
		for(int i = 0; i < H; i++) {
			if(A[i][j] == '#') {
				cnt = 0;
				continue;
			} else {
				b[i][j] = cnt;
				cnt++;
			}
		}
		int m = 0;
		for(int i = H-1; i >= 0; i--) {
			if(A[i][j] == '#') {
				m = 0;
				continue;
			} else {
				m = max(m, b[i][j]);
				b[i][j] = m;
			}
		}
	}
	int ans = 0;
	for(int i = 0; i < H; i++) {
		for(int j = 0; j < W; j++) {
			ans = max(ans, a[i][j] + b[i][j]);
		}
	}
	cout << ans + 1 << endl;
}
