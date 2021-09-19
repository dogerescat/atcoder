#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    int A = 0;
    int B = 0;
    for(int i = 0; i < n; i++) A += a[i], B += b[i];
    
}