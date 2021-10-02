#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;
    int n = s.size();
    int cnt = 0;
    for(int i = 0; i < n-1; i++) {
        if(s[i] != t[i]) {
            if(s[i] != t[i+1] || s[i+1] != t[i]) {
                cout << "No" << endl;
                return 0;
            } else {
                swap(s[i], s[i+1]);
                cnt++;
            }

        }
    }
    if(cnt > 1) cout << "No" << endl;
    else cout << "Yes" << endl;
}