#include <bits/stdc++.h>
using namespace std;

const double Pi = acos(-1);

int main() {
    double a, b, h, m;
    cin >> a >> b >> h >> m;
    double x = (m * Pi * 2) / 60;
    double y = ((h * 60 + m) * Pi * 2) / 720;
    double w = abs(x - y);
    double z = Pi - abs(w - Pi);
    double ans = a*a + b*b - 2*a*b*cos(z);
    cout << fixed << setprecision(12) << sqrt(ans) << endl;
}