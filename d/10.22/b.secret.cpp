#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    vector<int> a(10);
    for(int i = 0; i < 10; i++) {
        if(s[i] == 'o') a[i] = 1;
        else if(s[i] == '?') a[i] = -1;
    }
    int ans = 0;
    for(int i = 0; i < 10000; i++) {
        int k = i;
        vector<int> b(10);
        for(int j = 0; j < 4; j++) {
            int m = k % 10;
            k /= 10;
            b[m] = 1;
        }
        bool flag = true;
        for(int j = 0; j < 10; j++) {
            if(a[j] == 1) {
                if(b[j] == 0) flag = false;
            } else if(a[j] == 0) {
                if(b[j] == 1) flag = false;
            }
        }
        if(flag) ans++;
    }
    cout << ans << endl;
}