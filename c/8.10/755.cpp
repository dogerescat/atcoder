#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[3] = {3, 5, 7};
    int ans = 0;
    for(int i = 3; i <= 9; i++) {
        int ma = 1;
        for(int j = 0; j < i; j++) ma *= 3;
        for(int j = 0; j < ma; j++) {
            int m = j;
            int x = 0;
            int b[3] = {0, 0, 0};
            for(int k = 0; k < i; k++) {
                int d = m % 3;
                x = x * 10 + a[d];
                b[d]++;
                m /= 3;
            }
            if(0 < b[0] && 0 < b[1] && 0 < b[2] && x <= n) ans++;
        }
    }
    cout << ans << endl;
}