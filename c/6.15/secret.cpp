#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < 10000; i++) {
        int x = i;
        vector<bool> flag(10);
        for(int j = 0; j < 4; j++) {
            flag[x%10] = true;
            x /= 10;
        }
        bool flag2 = true;
        for(int j = 0; j < 10; j++) {
            if(!flag[j] && s[j] == 'o') flag2 = false;
            if(flag[j] && s[j] == 'x') flag2 = false;
        }
        if(flag2) ans++;
    }
    cout << ans << endl;
}