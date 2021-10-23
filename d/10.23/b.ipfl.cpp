#include <bits/stdc++.h>
using namespace std; 
int main() {
    int n, q;
    string s; cin >> n >> s >> q;
    bool flag = false;
    for(int i = 0; i < q; i++) {
        int t, a, b; cin >> t >> a >> b;
        --a, --b;
        if(t == 1) {
            if(flag) {
                if(a < n && b >= n) swap(s[a+n], s[b-n]);
                else if(a < n && b < n) swap(s[a+n], s[b+n]);
                else if(a >= n && b >= n) swap(s[a-n], s[b-n]);
            }
            else swap(s[a], s[b]);
        } else {
            if(flag) flag = false;
            else flag = true;
        }
    }
    if(flag) {
        for(int i = 0; i < n; i++) {
            swap(s[i], s[i+n]);
        }
    }
    cout << s << endl;
}