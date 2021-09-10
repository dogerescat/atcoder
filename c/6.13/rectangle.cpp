#include <bits/stdc++.h>
using namespace std;

int main() {
    double W, H, x, y;
    cin >> W >> H >> x >> y;
    double ans = W * H;
    int cnt = 0;
    if(W == x * 2 && H == y * 2) cnt++;
    ans /= 2;
    cout << fixed << setprecision(6) << ans << ' ' << cnt << endl;
}   