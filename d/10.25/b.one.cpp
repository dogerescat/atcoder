#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    string ans = "";
    while(n) {
        n--;
        ans = (char)('a' + (n % 26)) + ans;
        n /= 26;
    }
    cout << ans << endl;
}