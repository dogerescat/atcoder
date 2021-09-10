#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, y; cin >> n >> m >> x >> y;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    int ans = 0;
    int cnt = a[0];
    for(int i = 0; i < n+m; i++) {
        vector<int>::iterator ite; 
        ans++;
        if(i % 2 == 0) {
            ite = lower_bound(b.begin(), b.end(), cnt+x);
            if(*ite == 0) break;
        } else {
            ite = lower_bound(a.begin(), a.end(), cnt+y);
            if(*ite == 0) break;
        }
        cnt = *ite;
    }
    cout << ans / 2 << endl;
}