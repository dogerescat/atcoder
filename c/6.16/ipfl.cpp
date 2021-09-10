#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, t, a, b;
    string s;
    cin >> n >> s >> q;
    bool sw = false;
    for(int i = 0; i < q; i++) {
        cin >> t >> a >> b;
        a--; b--;
        if(t == 2) {
            sw = !sw;
            continue;
        }
        cout << sw << endl;
        if(sw) {
            if(a >= n) a -= n;
            else a += n;
            if(b >= n) b -= n;
            else b += n;
        }
        swap(s[a], s[b]);
    }
    if(sw) {
        string st1 = s.substr(0, n);
        string st2 = s.substr(n);
        cout << st2 + st1 << endl; 
    } else {
        cout << s << endl;
    }
}