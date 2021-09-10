#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> c(3, vector<int>(3));
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> c[i][j];
        }
    }
    bool ans = true;
    for(int i = 0; i < 3; i++) {
        for(int j = i+1; j < 3; j++) {
            int diff = c[i][0] - c[j][0];
            bool ok = true;
            for(int k = 0; k < 3; k++) {
                if(c[i][k] - c[j][k] != diff) ok = false;
            }
            if(!ok) ans = false;
        }
    } 
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}