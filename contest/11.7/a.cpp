#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int ans = 0;
    bool flag = false;
    for(int i = 0; ; i++) {
        if(flag) {
            if((s[i] - '0') >= 5) ans++;
            break;
        }
        if(s[i] == '.') flag = true;
        else ans = ans * 10 + (s[i] - '0');
    }
    cout << ans << endl;
}