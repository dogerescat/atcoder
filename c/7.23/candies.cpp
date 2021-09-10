#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> A(2, vector<int>(n));
    for(int i = 0; i < 2; i++) for(int j = 0; j < n; j++) cin >> A[i][j];
    vector<int> a(n+1);
    vector<int> b(n+1);
    for(int i = 1; i < n+1; i++) {
        a[i] = a[i-1] + A[0][i-1];
    }
    for(int i = 1; i < n+1; i++) {
        b[i] = b[i-1] + A[1][i-1];
    }
    int ans = 0;
    for(int i = 1; i < n+1; i++) {
        ans = max(ans, a[i] + b[n] - b[i-1]);
    }
    cout << ans << endl;
}