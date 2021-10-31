#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> b(n, vector<int>(m));
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> b[i][j];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int left = 0, right = 1001001001;
            while(right - left > 1) {
                int mid = (right + left) / 2;
                
            }
        }
    }
}