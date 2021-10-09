#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<char>> a(2*n, vector<char>(m));
    for(int i = 0; i < 2*n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector<pair<int, int>> p(2*n);
    for(int i = 0; i < 2*n; i++) {
        p[i].first = m;
        p[i].second = i;
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[p[2*j].second][i] == 'G') {
                if(a[p[2*j+1].second][i] == 'C') p[2*j].first--;
                else if(a[p[2*j+1].second][i] == 'P') p[2*j+1].first--;
            }
            else if(a[p[2*j].second][i] == 'C') {
                if(a[p[2*j+1].second][i] == 'P') p[2*j].first--;
                else if(a[p[2*j+1].second][i] == 'G') p[2*j+1].first--;
            }
            else if(a[p[2*j].second][i] == 'P') {
                if(a[p[2*j+1].second][i] == 'G') p[2*j].first--;
                else if(a[p[2*j+1].second][i] == 'C') p[2*j+1].first--;
            }
        }
        sort(p.begin(), p.end());
    }
    for(int i = 0; i < 2*n; i++) {
        cout << p[i].second+1 << endl;
    }
}