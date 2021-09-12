#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> p(26);
    string s = "";
    for(int i = 0; i < 26; i++) {
        int p; cin >> p;
        char c = 'a' + (p-1);
        s += c;
    }
    cout << s << endl;
}