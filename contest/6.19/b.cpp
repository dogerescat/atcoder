#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    vector<long long> a(1000000);
    a[0] = 0;
    for(long long i = 1; i < 1000000; i++) {
        a[i] = a[i-1] + i;
    }
    for(long long i = 1; i < 1000000; i++) {
        if(a[i] >= n) {
            cout << i << endl;
            return 0;
        }
    }
}