#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n+2);
    for(int i = 1; i <= n; i++) cin >> a[i];
    int total = 0;
    for(int i = 0; i <= n+1; i++) {
        total += abs(a[i] - a[i-1]);
    }
    for(int i = 1; i <= n; i++) {
        cout << total - abs(a[i] - a[i-1]) - abs(a[i+1] - a[i]) + abs(a[i+1] - a[i-1]) << endl; 
    }
}