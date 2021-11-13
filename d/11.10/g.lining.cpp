#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1000000007;
int main() {
    int n; cin >> n;
    vector<int> a(100001);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x]++;
    }
    int ans = 1;
    if(n % 2 == 0) {
        for(int i = 1; i < n; i += 2) {
            if(a[i] != 2) {
                cout << 0 << endl;
                return 0;
            }
            ans = ans * 2 % MOD;
        }
    } else {
        if(a[0] != 1) {
            cout << 0 << endl;
            return 0;
        }
        for(int i = 2; i < n; i += 2) {
            if(a[i] != 2) {
                cout << 0 << endl;
                return 0;
            }
            ans = ans * 2 % MOD;
        }
    }
    cout << ans << endl;
}