#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n-1; i++) {
        int x, y; cin >> x >> y;
        x--, y--;
        a[x]++, a[y]++;
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == n-1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}