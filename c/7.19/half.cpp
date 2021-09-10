#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    int ans = 0;
    while(x && y) {
        if(a + b > c*2) ans += 2*c;
        else ans += a + b;
        --x;
        --y;
    }
    if(x) {
        if(a <= 2*c) ans += a * x;
        else ans += c * x * 2;
    }
    if(y) {
        if(b <= 2*c) ans += b * y;
        else ans += c * y * 2;
    }
    cout << ans << endl;
}