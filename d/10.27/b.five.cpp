#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
   ll n, a, b, c, d, e; cin >> n >> a >> b >> c >> d >> e;
   ll m = min({a, b, c, d, e}); 
   cout << 4 + (n + m - 1) / m << endl; 
}