#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;
    int ss = s.size();
    int ts = t.size();
    vector<string> S;
    for(int i = 0; i <= ss - ts; i++) {
        string a = s;
        bool ok = true;
        for(int j = 0; j < ts; j++) {
            if(s[j+i] == t[j] || s[j+i] == '?') a[j+i] = t[j];
            else ok = false;
        }
        if(ok) {
            for(int j = 0; j < a.size(); j++) {
                if(a[j] == '?') a[j] = 'a';
            }
            S.push_back(a);
        }
    }
    if(!S.size()) cout << "UNRESTORABLE" << endl;
    else {
        sort(S.begin(), S.end());
        cout << S[0] << endl;
    }
}