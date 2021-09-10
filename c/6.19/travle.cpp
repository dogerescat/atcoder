#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    vector<int> b(n);
    iota(b.begin(), b.end(), 0);
    int ans = 0;
    do {
        int cnt = 0;
        for(int i = 0; i < n-1; i++) {
            cnt += a[b[i]][b[i+1]];
        }
        cnt += a[b[b.size()-1]][0];
        if(cnt == k) ans++;
        
    } while(next_permutation(b.begin()+1, b.end()));
    cout << ans << endl;
}