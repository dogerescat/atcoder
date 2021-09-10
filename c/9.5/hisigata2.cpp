#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c, k; cin >> r >> c >> k;
    vector<vector<int>> a(r+2, vector<int>(c+2));
    for(int i = 1; i <= r; i++) for(int j = 1; j <= c; j++) {
        char x; cin >> x;
        x == 'x' ? a[i][j] = 0 : a[i][j] = 1;
    }
    // for(int i = 0; i <= r+1; i++) {
    //     for(int j = 0; j <= c+1; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int ans = 0;
    for(int i = 1; i <= r; i++) for(int j = 1; j <= c; j++) {
        if(a[i+1][j] == 1 && a[i][j+1] == 1 && a[i-1][j] == 1 && a[i][j-1] == 1 && a[i][j] == 1) ans++;
    }
    cout << ans << endl;
}