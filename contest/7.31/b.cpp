#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> x(4);
    for(int i = 0; i < 4; i++) x[i] = s[i] - '0';
    bool a = false;
    bool b = false;
    for(int i = 1; i < 4; i++) {
        if(x[i-1] != x[i]) b = true;
        if((x[i-1]+1)%10 != x[i]) a = true;
    }
    if(a && b) cout << "Strong" << endl;
    else cout << "Weak" << endl;
}