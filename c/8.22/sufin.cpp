#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i <= n; i++) {
        int M = m - 3 * i;
        if(M < 0) continue;
        int N = n - i;
        int a = N * 2;
        int b = M - a;
        if(b < 0 || b % 2 != 0) continue;
        int c = b / 2;
        if(N - c < 0) continue;
        cout <<  N - c << ' ' << i << ' ' << c << endl;
        return 0;
    }
    cout << -1 << ' ' << -1 << ' ' << -1 << endl;
}