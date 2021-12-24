#include <iostream>
#include <vector>
using namespace std;


int main() {
	int H, W; cin >> H >> W;
	vector<vector<char>> A(H+2, vector<char>(W+2, '#'));
	for(int i = 0; i < H; i++) for(int j = 0; j < W; j++) cin >> A[i][j];
	vector<vector<int>> dp(H, vector<int> (W));
	for(int i = H-1; i >= 0; i--) for(int j = W-1; j >= 0; j--) {
		if(A[i][j] == '#') continue;
		dp[i][j] = 1;
		if(i+1 < H) dp[i][j] = max(dp[i][j], dp[i+1][j]+1);
		if(j+1 < W) dp[i][j] = max(dp[i][j], dp[i][j+1]+1);
	}
	cout << dp[0][0] << endl;
}
