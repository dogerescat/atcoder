#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, a; cin >> n >> k >> a;
    int i = a-1;
    while(k) {
        i = i % n;
        i++;
        k--;
    }
    cout << i << endl;
}