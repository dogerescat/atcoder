#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

int main() {
    ll a; double b; 
    cin >> a >> b;
    ll c = b * 100 + 0.5;
    a *= c;
    a /= 100;
    cout << a << endl;
}