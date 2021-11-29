#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int cnt = 1;
    for(int i = 0; i < m; i++) cnt *= 2;
    int ans = 0;
    ans += (n - m) * 100 * cnt;
    ans += m * 1900 * cnt;
    cout << ans << endl;
}
