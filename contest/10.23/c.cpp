#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    vector<ll> x(n);
    vector<ll> y(n);
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                int y1 = y[j] - y[i];
                int x1 = x[k] - x[j];
                int y2 = y[k] - y[j];
                int x2 = x[j] - x[i];
                if((y1 * x1) == (y2 * x2)) cnt++;
            }
        }
    }
    vector<vector<int>> c(1001, vector<int> (1001));
    c[0][0] = 1;
    for(int i = 0; i <= 300; i++) {
        for(int j = 0; j <= i; j++) {
            c[i+1][j] += c[i][j];
            c[i+1][j+1] += c[i][j];
        }
    }
    int ans = c[n][3] - cnt;
    cout << ans << endl;
}