#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    vector<int> a(10);
    for(int i = 0; i < s.size(); i++) {
        a[s[i] - '0']++;
    }
    if(s.size() == 1) {
        if((s[0] - '0') == 8) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    } else if(s.size() == 2) {
        int n = (s[0] - '0') * 10 + (s[1] - '0');
        int m = (s[1] - '0') * 10 + (s[0] - '0');
        if(n % 8 == 0 || m % 8 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    }
    for(int i = 112; i < 1000; i+=8) {
        vector<int> v(10);
        int x = i;
        for(int j = 0; j < 3; j++) {
            v[x % 10]++;
            x /= 10;
        }
        bool ok = true;
        for(int j = 0; j < 10; j++) {
            if(v[j] > a[j]) ok = false; 
            if(v[j] && !a[j]) ok = false;
        }
        if(ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}