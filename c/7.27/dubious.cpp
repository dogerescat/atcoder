#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;  cin >> s >> t;
    if(s.size() < t.size()) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    vector<string> S;
    for(int i = 0; i <= s.size() - t.size(); i++) {
        bool ok = true;
        for(int j = 0; j < t.size(); j++) {
            if(s[i+j] != t[j] && s[i+j] != '?') ok = false;
        }
        if(ok) {
            string ss = s;
            for(int j = 0; j < t.size(); j++) {
                ss[i+j] = t[j];
            }
            for(int j = 0; j < s.size(); j++) {
                if(ss[j] == '?') ss[j] = 'a';
            }
            S.push_back(ss);
        }
    }
    sort(S.begin(), S.end());
    if(!S.size()) cout << "UNRESTORABLE" << endl;
    else cout << S[0] << endl;
}