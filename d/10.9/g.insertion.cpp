#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; string s; cin >> n >> s;
    int cnt = 0;
    string t = s;
    for(int i = 0; i < n; i++) {
        if(s[i] == ')') {
            if(!cnt) {
                t = "(" + t;
            } else cnt--;
        } else {
            cnt++;
        }
    }
    cnt = 0;
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == '(') {
            if(!cnt) {
                t = t + ")";
            } else cnt--;
        } else {
            cnt++;
        }
    }
    cout << t << endl;
}