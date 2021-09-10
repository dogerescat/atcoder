#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int a = 0;
    int b = 0;
    for(int i = 0; i < s.size(); i++) {
        int j = s[i] - '0';
        if(j % 2 == 0) a++;
        else b++;
    }
    cout << s.size() - abs(a-b) << endl;
}