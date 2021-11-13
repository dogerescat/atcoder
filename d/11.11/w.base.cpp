#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s = "";
    while(n) {
        if(n % -2 == 0) {
            s = '0' + s;
        } else {
            n--;
            s = '1' + s;
        }
        n /= -2;
    }
    if(s != "") cout << s << endl;
    else cout << 0 << endl;
}