#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<bool> ans(4, false);
    for(int i = 0; i < 4; i++) {
        string s; cin >> s;
        if(s == "H") ans[0] = true;
        else if(s == "2B") ans[1] = true;
        else if(s == "3B") ans[2] = true;
        else if(s == "HR") ans[3] = true;
    }
    bool ok = true;
    for(int i = 0; i < 4; i++) {
        if(!ans[i]) ok = false;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}