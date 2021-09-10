#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool is_zero = false;
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') is_zero = true;
        if(s[i] == '+') {
            if(!is_zero) ans++;
            else is_zero = false;
        }
    }
    if(!is_zero) cout << ans + 1 << endl;
    else cout << ans << endl;
}