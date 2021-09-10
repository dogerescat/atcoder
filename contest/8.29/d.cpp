#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(m);
    for(int i = 0; i < m; i++) {
        int k; cin >> k;
        for(int j = 0; j < k; j++) {
            int x; cin >> x;
            a[i].push_back(x-1);
        }
    }
    vector<int> b(m);
    for(int i = 0; i < m; i++) {
        
    }
}