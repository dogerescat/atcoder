#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    string s = "";
    while(n) {
        n--;
        s += (char)'a' + n % 26;
        n /= 26;
    }
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
    }
    cout << endl;
}