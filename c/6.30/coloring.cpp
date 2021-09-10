#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int ans = 1e9;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] - '0' == i % 2) cnt++;
    }
    ans = min(ans, cnt);
    cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] - '0' != i % 2) cnt++;
    }
    ans = min(ans, cnt);
    cout << ans << endl;
}