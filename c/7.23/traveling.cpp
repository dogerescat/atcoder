#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> a(n+1, vector<int>(3));
    for(int i = 1; i < n+1; i++) cin >> a[i][0] >> a[i][1] >> a[i][2];
    bool ok = true;
    for(int i = 0; i < n; i++) {
        int t = abs(a[i+1][0] - a[i][0]);
        int x = abs(a[i+1][1] - a[i][1]);
        int y = abs(a[i+1][2] - a[i][2]);
        if(t < x + y || (x + y) % 2 != t % 2) ok = false;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}