#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k; cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> a[i] >> b[i];
    cin >> k;
    vector<int> c(k);
    vector<int> d(k);
    for(int i =0 ; i < k; i++) cin >> c[i] >> d[i];
    int ans = 0;
    for(int bit = 0; bit < 1 << k; bit++) {
        vector<int> x(n);
        int cnt = 0;
        for(int i = 0; i < k; i++) {
           if(bit & 1 << i) x[c[i]-1] = 1;
           else x[d[i]-1] = 1; 
        }
        for(int i = 0; i < m; i++) {
            if(x[a[i]-1] && x[b[i]-1]) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}