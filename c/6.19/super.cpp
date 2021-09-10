#include <bits/stdc++.h>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int r = r2 - r1; int c = c2 - c1;
    int ans = 3;
    if(!r && !c) ans = 0;
    else if(-r == c || r == c || abs(r) + abs(c) <= 3) ans = 1;
    else if(abs(r) + abs(c) <= 6 || abs(r+c) <= 6 || (r1+r2+c1+c2) % 2 == 0 || abs(r-c) <= 6) ans = 2;
    cout << ans << endl;
}
