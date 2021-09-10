//うまくいかないやつ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n, 0);
    for(int i = 0; i < m; i++) {
        int s, c; cin >> s >> c;
        if(a[s-1] != 0 && a[s-1] != c) {
            cout << -1 << endl;
            return 0;
        }
        a[s-1] = c;
    }
    for(int i = 0; i < 1000; i++) {
        string s = to_string(i);
        if(s.size() != n) continue;
        bool ok = true;
        for(int j = 0; j < n; j++) {
            if((int)(s[j] - '0') != a[j]) ok = false;
        }
        if(ok) {
            cout << i << endl;
            return 0;
        }

    }
    cout << -1 << endl;
}