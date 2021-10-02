#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> A(10);
    int cnt = 0;
    while(n) {
        A[n%10]++;
        n /= 10;
        cnt++;
    }
    int a = 0, b = 0;
    for(int i = 0; i < cnt; i++) {
        for(int j = 9; j >= 0; j--) {
            if(!A[j]) continue;
            if(a <= b) {
                a = a * 10 + j;
                A[j]--;
                break;
            } else {
                b = b * 10 + j;
                A[j]--;
                break;
            }
        }
    }
    cout << a * b << endl;
}