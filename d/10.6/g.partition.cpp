#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int ans = 0;
    for(int i = 1; i * i <= m; i++) {
        if(m % i != 0) continue;
        int j = m / i;
        if((long)i * n <= m) ans = max(ans, i);
        if((long)j * n <= m) ans = max(ans, j);
        
    }
    cout << ans << endl;
}