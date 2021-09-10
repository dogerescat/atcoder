#include <bits/stdc++.h>
using namespace std;

const long long INF = 10000000000001;

template<class T> void chmax(T& a, T b) {
    if(a > b) {
        a = b;
    }
}

int main() {
    long long n;
    cin >> n;
    long long a = sqrt(n);
    long long ans = INF;
    for(long long i = 1; i <= a; i++) {
        if(n % i == 0) {
            long long j = n / i;
            chmax(ans, j-1+i-1);
        }
    }
    cout << ans << endl;
}