#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> c(n-1);
    vector<int> s(n-1);
    vector<int> f(n-1);
    for(int i = 0; i < n-1; i++) cin >> c[i] >> s[i] >> f[i];
    vector<int> ans(n);
    for(int i = 0; i < n-1; i++) {
        int a = s[i] + c[i];
        for(int j = i + 1; j < n-1; j++) {
            if(a > s[j]) {
                if((a - s[j]) % f[j] != 0) a += f[j] - ((a - s[j]) % f[j]);
            }
            else a = s[j];
            a += c[j];
        }
        ans[i] = a;
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
}