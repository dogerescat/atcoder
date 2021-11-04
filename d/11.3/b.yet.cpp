#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x; cin >> x;
    ll a = x / 11;
    ll b = x % 11;
    a *= 2;
    if(b) {
        if(b <= 6) a += 1;
        else a += 2;
    } 
    cout << a << endl;    
}