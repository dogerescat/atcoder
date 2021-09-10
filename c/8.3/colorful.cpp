#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<bool> b(8);
    int M = 0;
    int m = 0;
    int over = 0;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        if(a <= 399) b[0] = true;
        else if(a <= 799) b[1] = true;
        else if(a <= 1199) b[2] = true;
        else if(a <= 1599) b[3] = true;
        else if(a <= 1999) b[4] = true;
        else if(a <= 2399) b[5] = true;
        else if(a <= 2799) b[6] = true;
        else if(a <= 3199) b[7] = true;
        else if(a >= 3200) over++;
    }
    for(int i = 0; i < 8; i++) {
        if(b[i]) m++, M++;
    }
    cout << ((!m && over) ? 1 : m ) << " " << M + over << endl;
}