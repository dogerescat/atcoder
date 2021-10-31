#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n, m;
    cin >> n >> m;
    if(n > m) swap(n, m);
    if(n == 1) {
        if(m == 1) cout << 1 << endl;
        else cout << m - 2 << endl;
    } 
    else cout << (n - 2) * (m - 2) << endl; 
}