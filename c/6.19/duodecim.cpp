#include <bits/stdc++.h>
using namespace std;

int main() {
    int L; cin >> L;
    long long x = 1;
    for(int i = 1; i <= 11; i++) {
        x *= L-i;
        x /= i;
    }
    cout << x << endl;
}