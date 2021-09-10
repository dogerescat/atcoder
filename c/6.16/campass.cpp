#include <bits/stdc++.h>
using namespace std;

int main() {
    long long r, x , y;
    cin >> r >> x >> y;
    long long d = x*x + y*y;
    if(d == r*r) {
        cout << 1 << endl;
        return 0;
    }
    if(d <= 2*r*r) {
        cout << 2 << endl;
        return 0;
    }
    cout << ceil(sqrt(d) / r) << endl;
}