#include <bits/stdc++.h>
using namespace std;

int h, w;

int dfs(vector<vector<int>> &use,int i, int j, int a, int b) {
    if(a < 0 || b < 0) return 0;
    if(j == w) j = 0, i++;
    if(i == h) return 1;
    if(use[i][j]) return dfs(use, i, j+1, a, b);
    
    int res = 0;
    use[i][j] = 1;
    res += dfs(use, i, j+1, a, b-1);
    if(j+1 < w && !use[i][j+1]) {
        use[i][j+1] = 1;
        res += dfs(use, i, j+1, a-1, b);
        use[i][j+1] = 0;
    }
    if(i+1 < h && !use[i+1][j]) {
        use[i+1][j] = 1;
        res += dfs(use, i, j+1, a-1, b);
        use[i+1][j] = 0;
    }
    use[i][j] = 0;
    return res;
}

int main() {
    int a, b; cin >> h >> w >> a >> b;
    vector<vector<int>> use(h, vector<int> (w));
    int ans = dfs(use, 0, 0, a, b);
    cout << ans << endl;
}