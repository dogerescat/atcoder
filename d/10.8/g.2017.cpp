#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    vector<int> a(1001001);
    for(int i = 1; i < 100001; i+=2) {
        int k = (i + 1) / 2;
        bool flag = true;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                flag = false;
            }
        }
        for(int j = 2; j * j <= k; j++) {
            if(k % j == 0) {
                flag = false;
            }
        }
        if(flag) a[i]++;
    }
    for(int i = 3; i < 100000; i++) {
        a[i] += a[i-1];
    }
    for(int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        cout << a[r] - a[l-1] << endl;
    }
}