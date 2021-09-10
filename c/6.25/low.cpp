#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int mi = 1e9;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(mi > x) {
            mi = x;
            ans++;
        }
    }
    cout << ans << endl;
}