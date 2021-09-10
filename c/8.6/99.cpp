#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a = 2025 - n;
    for(int i = 1; i <= 9; i++) {
        if(a % i == 0 && a / i < 10) {
            cout << i << ' ' << 'x' << ' ' << a / i << endl;
        }
    }
}