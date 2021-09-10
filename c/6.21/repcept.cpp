#include <bits/stdc++.h>
using namespace std;

int main() {
    int k; cin >> k;
    vector<int> a(k+1);
    a[0] = 7 % k;
    for(int i = 1; i <= k; i++) {
        a[i] = (a[i-1] * 10 + 7) % k;
    }
    for(int i = 0; i <= k; i++) {
        if(a[i] == 0) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}