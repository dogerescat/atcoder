#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    string s = "";
    while(n) {
        if(n % 2 != 0) {
            n--;
            s = 'A' + s;
        } else {
            n /= 2;
            s = 'B' + s;
        }
    }
    cout << s << endl;
}