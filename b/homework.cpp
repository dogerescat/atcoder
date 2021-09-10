#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        n -= a;
    }
    if(n < 0) cout << -1 << endl;
    else cout << n << endl;
}