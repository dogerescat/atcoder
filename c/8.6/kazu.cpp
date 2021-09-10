#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    if(a+d > b+c) cout << e + d + a << endl;
    else cout << e + c + b << endl;
}