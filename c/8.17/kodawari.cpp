#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<bool> v(10);
    for(int i = 0; i < k; i++) {
        int a; cin >> a;
        v[a] = true;
    }
    for(int i = n; ; i++) {
        int a = i;
        bool ok = true;
        while(a) {
            if(v[a%10]) ok = false;
            a /= 10;
        }
        if(ok) {
            cout << i << endl;
            return 0;
        }
    }
}