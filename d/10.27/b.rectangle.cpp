#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, x, y; cin >> w >> h >> x >> y;
    double ans = (double) w * h / 2;
    int ans2 = 0;
    if(w == 2 * x && h == 2 * y) ans2 = 1;
    printf("%.10f %d\n", ans, ans2);
}