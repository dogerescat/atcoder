#include <bits/stdc++.h>
using namespace std;

long long dx(long long x) {
    long long len = to_string(x).length();
    return len;
}

int main() {
    long long a, b, x;
    cin >> a >> b >> x;
    long long left = 0; long long right = 1000000001;
    while(right - left > 1) {
        long long mid = (left + right) / 2;
        long long len = dx(mid);
        if(a * mid + b * len <= x) left = mid;
        else right = mid;
    }
    cout << left << endl;
}