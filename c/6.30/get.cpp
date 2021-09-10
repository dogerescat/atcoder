#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    string s;
    cin >> s;
    vector<int> a(n);
    a[0] = 0;
    for(int i = 1; i < n; i++) {
        if(s[i-1] == 'A' && s[i] == 'C') a[i] = a[i-1] + 1;
        else a[i] = a[i-1];
    }
    for(int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        cout << a[r-1] - a[l-1] << endl;
    }
}