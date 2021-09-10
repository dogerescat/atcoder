#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d; 
    if(b >= c*d) {
        cout << -1 << endl;
        return 0;
    }
    for(int i = 1; ; i++) {
        a -= c*d-b;
        if(a <= 0) {
            cout << i << endl;
            return 0;
        }
    }
}