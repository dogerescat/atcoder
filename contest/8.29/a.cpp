#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int y = s[s.length()-1] - '0';
    int x = atoi(s.c_str());
    if(y <= 2) cout << x << '-' << endl;
    else if(y <= 6) cout << x << endl;
    else if(y <= 9) cout << x << '+' << endl;
}