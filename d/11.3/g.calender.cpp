#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> a[i][j];
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < m; j++) {
            int x = a[i][j] / 7;
            int y = a[i][j-1] / 7; 
            if(x != y) {
                cout << "No" << endl;
                return 0;
            }
        }
    } 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
           if(i != n-1) {
               if(a[i][j] + 7 != a[i+1][j]) {
                   cout << "No" << endl;
                   return 0;
               }
           } 
           if(j != m-1) {
               if(a[i][j] + 1 != a[i][j+1]) {
                   cout << "No" << endl;
                   return 0;
               }
           }
        }
    }
    cout << "Yes" << endl;
}