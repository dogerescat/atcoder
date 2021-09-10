#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    char a = s[0];
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        if(a != s[i]) {
            a = s[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}