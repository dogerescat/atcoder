#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &a, vector<int> &b, int cur, int n) {
    if(cur == n) return a[cur-1] = 1;
    int M = -1001001001, m = 1001001001;
    bool ok = false;
    for(int i = 1; i < n; i++) {
        if(b[i] == cur) {
            ok = true;
            M = max(M, func(a, b, i+1, n));
            m = min(m, func(a, b, i+1, n));
        }
    }
    if(ok) return a[cur-1] = M + m + 1;
    else return a[cur-1] = 1;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 1; i < n; i++) cin >> b[i];
    func(a, b, 1, n);
    cout << a[0] << endl;
}