#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> a[i][j];
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) a[i][j]--;
    int si = a[0][0]/7;
    int sj = a[0][0]%7;
    if(sj + m - 1 >= 7) {
        cout << "No" << endl;
        return 0;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int b = (si + i) * 7 + (sj + j);
            if(a[i][j] != b) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}