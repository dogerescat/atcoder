#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> f(n, vector<int>(10));
    vector<vector<int>> p(n, vector<int>(11));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 10; j++) {
            cin >> f[i][j];
        }
    }
    for(int i = 0; i < n; i++) for(int j = 0; j <= 10; j++) cin >> p[i][j];
    int ans = -1000000007;
    for(int bit = 1; bit < 1 << 10; bit++) {
        int x = 0;
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(int j = 0; j < 10; j++) {
                if(f[i][j] && bit & 1 << j) cnt++;
            }
            x += p[i][cnt];
        }
        ans = max(ans, x);
    }
    cout << ans << endl;
}