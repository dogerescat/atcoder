#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int x = 1;
    for(int i = 0; i < m; i++) x *= 2;
    int ans = 1900 * m + 100 * (n - m);
    cout << ans * x << endl;
}