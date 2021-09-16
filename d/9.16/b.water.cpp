#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

int main() {
    double a, b, x; cin >> a >> b >> x; 
    double s = x / a;
    if(a*b/2 < s) {
        double h = 2 * (a * b - s) / a;
        double y = atan2(h, a);
        cout << fixed << setprecision(10) << y / 2 / PI * 360 << endl;
    } else {
        double c = 2 * s / b;
        double y = atan2(b, c);
        cout << fixed <<  setprecision(10) << y / 2 / PI * 360 << endl;
    }
}