#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.size();
    reverse(s.begin(), s.end());
    vector<string> a;
    a.push_back("maerd");
    a.push_back("remaerd");
    a.push_back("esare");
    a.push_back("resare");
    int index = 0;
    while(index < n) {
        bool flag = false;
        for(auto i : a) {
            bool ok = true;
            for(int j = 0; j < i.size(); j++) {
                if(s[index + j] != i[j]) ok = false;
            }
            if(ok) index += i.size(), flag = true;
        }
        if(!flag) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}