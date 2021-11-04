#include <bits/stdc++.h>
using namespace std;

int main() {
    int k; cin >> k;
    vector<int> a(k+1);
    int value = 0;
    for(int i = 1; i <= k; i++) {
        value = (value * 10 + 7) % k;
        a[i] = value;
    }
    for(int i = 1; i <= k; i++) {
        if(!a[i]) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}