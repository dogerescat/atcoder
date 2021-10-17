#include <bits/stdc++.h>
using namespace std;

vector<int> x = {0, 1, 0, -1, 1, -1, 1, -1};
vector<int> y = {1, 0, -1, 0, 1, 1, -1, -1};

int main() {
    int h, w; cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];
    vector<string> t = s;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(s[i][j] == '#') continue;
            for(int k = 0; k < 8; k++) {
                if((i + y[k] < h && i + y[k] >= 0) && (j + x[k] < w && j + x[k] >= 0)) {
                    if(s[i + y[k]][j + x[k]] == '#') t[i+y[k]][j+x[k]] = '.';
                }
            }
        }
    }
    vector<string> u = t;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            bool flag = false;
            for(int k = 0; k < 8; k++) {
                if((i + y[k] < h && i + y[k] >= 0) && (j + x[k] < w && j + x[k] >= 0)) {
                    if(t[i+y[k]][j + x[k]] == '#') flag = true;
                }
            }
            if(flag) u[i][j] = '#';
        }
    }
    if(u == s) {
        cout << "possible" << endl;
        for(int i = 0; i < h; i++) {
            for(int j = 0;j < w; j++) {
                cout << t[i][j];
            }
            cout << endl;
        }
    } else {
        cout << "impossible" << endl;
    }
}