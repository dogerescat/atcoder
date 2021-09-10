#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    long long ans = 0;
    if(n > 999) ans += n - 999;
    if(n > 999999) ans += n - 999999;
    if(n > 999999999) ans += n - 999999999;
    if(n > 999999999999) ans += n - 999999999999;
    if(n > 999999999999999) ans += n - 999999999999999;
    cout << ans << endl;
}