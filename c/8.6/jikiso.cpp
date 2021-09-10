#include <bits/stdc++.h>
using namespace std;

int main() {
    double xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    xb -= xa; yb -= ya;
    xc -= xa; yc -= ya;
    double ans = abs(xb*yc - yb*xc)/2.0;
    cout << fixed << setprecision(1) << ans << endl;
}