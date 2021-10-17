#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, k; cin >> n >> k;
    double a = (k-1) * (n-k) * 6;
    double b = ((k-1) * 3) + ((n-k) * 3);
    long double x = n * n * n; 
    cout << fixed << setprecision(10) << (a + b + 1.0) / x << endl;
}