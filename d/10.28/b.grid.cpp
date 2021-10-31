#include <bits/stdc++.h>
using namespace std;
vector<int> x = {0, 1, 0, -1};
vector<int> y = {1, 0, -1, 0};
int main() {
    int h, w; cin >> h >> w; 
    vector<vector<char>> a(h+2, vector<char> (w+2, '.'));
    for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++) cin >> a[i][j];
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            if(a[i][j] == '.') continue;
            bool flag = false;
            for(int k = 0; k < 4; k++) {
                if(a[i+y[k]][j+x[k]] == '#') flag = true;
            }
            if(!flag) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}