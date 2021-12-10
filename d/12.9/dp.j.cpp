#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

bool used[305][305][305];
double dp[305][305][305];
int n;
int cnt[4];
double solve(int x, int y, int z) {
	if(!x && !y && !z) return 0;	
	if(used[x][y][z]) return dp[x][y][z];
	double ret = (double)n / (x + y + z);
	if(x) ret += solve(x-1, y, z) * (double)x / (x + y + z);
	if(y) ret += solve(x+1, y-1, z) * (double)y / (x + y + z);
	if(z) ret += solve(x, y+1, z-1) * (double)z / (x + y + z);
	used[x][y][z] = true;
	return dp[x][y][z] = ret;
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		cnt[a]++;
	}
	cout << fixed << setprecision(10) << solve(cnt[1], cnt[2], cnt[3]) << endl;	
}
