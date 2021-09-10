#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s = "";
    while(n) {
        if(n % 2 != 0) {
            n--;
            s = "1" + s;
            n /= -2;
        } else {
            s = "0" + s;
            n /= -2;
        }
    }
    if(s == "") cout << 0 << endl;
    else cout << s << endl;
}