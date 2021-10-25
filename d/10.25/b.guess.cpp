#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, -1);
    for(int i = 0; i < m; i++) {
        int s, c; cin >> s >> c;
        if(a[s-1] != -1 && a[s-1] != c) {
            cout << -1 << endl;
            return 0;
        } 
        a[s-1] = c;
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == -1 && n != 1 && i == 0) a[i] = 1;
        else if(a[i] == -1) a[i] = 0;
        ans = ans * 10 + a[i];
    }
    if(!ans) {
        if(n != 1) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;

}