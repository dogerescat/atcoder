#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(3);
    string t;
    for(int i = 0; i < 3; i++) cin >> s[i];
    cin >> t;
    string ans = "";
    for(auto c : t) {
        ans += s[(c - '0')-1];
    }
    cout << ans << endl;
}