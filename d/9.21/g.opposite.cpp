#include <bits/stdc++.h>
using namespace std;
using C = complex<double>;

C inC() {
    double x, y; cin >> x >> y;
    return C(x, y);
}

int main() {
    int n; cin >> n;
    C s, t;
    s = inC();
    t = inC();
    double PI = acos(-1);
    double red = 2 * PI / n;
    C h = (s + t) / 2.0;
    C r(cos(red), sin(red));
    C ans = h + (s - h) * r;
    cout << fixed << setprecision(10) << ans.real() << " " << ans.imag() << endl;
}