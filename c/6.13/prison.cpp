#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int left = 0;
    int right = n+1;
    for(int i = 0; i < m; i++) {
        int L, R; cin >> L >> R;
        if(left < L) left = L;
        if(right > R) right = R;
    }
    int ans = right - left + 1;
    if(ans < 0) cout << 0 << endl;
    else cout << ans << endl;
}