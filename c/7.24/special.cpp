#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> c(n-1);
    vector<int> s(n-1);
    vector<int> f(n-1);
    for(int i = 0; i < n - 1; i++) cin >> c[i] >> s[i] >> f[i];
    for(int i = 0; i < n; i++) {
        int a = 0;
        int j = i;
        while(n - 1 - j > 0) {
            if(a <= s[j]) {
                a += s[j] - a + c[j];
            } else {
                int b = s[j];
                while(b < a) {
                    b += f[j];
                }
                a += b - a + c[j];
            }
            j++;
        }
        cout << a << endl;
    }
}