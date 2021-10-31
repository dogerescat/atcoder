#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    string s; cin >> s;
    vector<int> a(n);
    for(int i = 1; i < n; i++) {
        if(s[i] == 'C' && s[i-1] == 'A') a[i]++;
    }
    for(int i = 1; i < n; i++) {
        a[i] += a[i-1];
    }
    for(int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        --l, --r;
        cout << a[r] - a[l] << endl;
    }
}