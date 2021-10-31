#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    string s;
    ll k; 
    cin >> s >> k;
    int n = s.size();
    for(int i = 0; i < n; i++) {
        k--;
        if(s[i] != '1' || !k) {
            cout << s[i] << endl;
            return 0;
        } 
    }
    cout << 1 << endl;
}