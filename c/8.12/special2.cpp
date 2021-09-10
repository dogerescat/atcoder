#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> c(n-1), s(n-1), f(n-1), ans(n);
    for(int i = 0; i < n-1; i++) cin >> c[i] >> s[i] >> f[i];
    for(int i = 0; i < n; i++) {
        int a = 0;
        int j = i;
        while(n - 1 - j > 0) {
            if(a <= s[j]) a += s[j] - a;
            else a += f[j] - ((a - s[j]) % f[j]);
            a += c[j];
            j++;
        }
        ans[i] = a;
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << "\n";
    }
}
