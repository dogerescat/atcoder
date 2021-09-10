#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = "";
    vector<string> S;
    int n = s.size();
    for(int i = n-1; i >= 0; i--) {
        t = s[i] + t;
        if(t == "dreamer" || t == "dream" || t == "eraser" || t == "erase") {
            S.push_back(t);
            t = "";
        }
    }
    int m = 0;
    for(auto i : S) {
        m += i.size();
    }
    if(m == n) cout << "YES" << endl;
    else cout << "NO" << endl;
}