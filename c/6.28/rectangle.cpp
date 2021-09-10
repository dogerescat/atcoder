#include <bits/stdc++.h>
using namespace std;

int main() {
    double w, h, x, y;
    cin >> w >> h >> x >> y;
    double ans = w * h;
    if(w == h) {
        cout << fixed << setprecision(10) << ans / 2 << " " << 1 << endl;
        return 0;
    } else if(w > h) {
        if(y == 0 || y == h) {
            cout << fixed << setprecision(10) << ans * (x / w) << " " << 0 << endl;
            return 0;
        } else {
            cout << fixed << setprecision(10) << ans * (y / h) << " " << 0 << endl;
            return 0;
        }
    } else if(h > w) {
        if(x == 0 || x == w) {
            cout << fixed << setprecision(10) << ans * (y / h) << " " << 0 << endl;
            return 0;
        } else {
            cout << fixed << setprecision(10) << ans * (x / w) << " " << 0 << endl;
        }
    }
}