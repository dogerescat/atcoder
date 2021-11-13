#include <bits/stdc++.h>
using namespace std;

bool match(int k, string s, string t) {
    for(int i = 0; i < t.size(); i++) {
        if(t[i] != s[i+k] && s[i+k] != '?') return false;
    }
    return true;
}
string func(int k, string s, string t) {
    string a = s;
    for(int i = 0; i < t.size(); i++) {
        a[i+k] = t[i];
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '?') a[i] = 'a';
    }
    return a;
}
int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    int cnt = 0;
    vector<string> ans;
    for(int i = 0; i <= n - m; i++) {
        bool ok = match(i, s, t);
        if(ok) {
            ans.push_back(func(i, s, t));
        }
    }
    sort(ans.begin(), ans.end());
    if(!ans.size()) cout << "UNRESTORABLE" << endl;
    else cout << ans[0] << endl;
}