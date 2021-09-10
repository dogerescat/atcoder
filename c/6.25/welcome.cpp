#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<bool> a(n, false);
    vector<int> wa(n);
    int ans = 0;
    int ans2 = 0;
    for(int i = 0; i < m; i++) {
        int p; string s; cin >> p >> s;
        if(!a[p-1]) {
            if(s == "AC") a[p-1] = true;
            else wa[p-1]++;
        }
    }
    for(int i = 0; i < n; i++) {
        if(a[i]) {
            ans++;
            ans2 += wa[i];
        }
    }
    cout << ans << ' ' << ans2 << endl;
}