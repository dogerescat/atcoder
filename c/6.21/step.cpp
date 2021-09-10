#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    long long M = 0;
    long long cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > M) {
            M = a[i];
        } else {
            cnt += M - a[i];
        }
    }
    cout << cnt << endl;
}