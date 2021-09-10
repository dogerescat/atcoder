#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[i] = --x;
    } 
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        b[i] = --x;
    } 
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        c[i] = --x;
    } 
    vector<int> count(n, 0);
    for(int i = 0; i < n; i++) {
        count[b[c[i]]]++; 
    }
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        ans += count[a[i]];
    }
    cout << ans << endl;
}