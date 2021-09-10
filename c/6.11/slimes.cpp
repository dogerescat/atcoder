#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    char prev = ' ';
    for(int i = 0; i < n; i++) {
        char a = s[i];
        if(prev != a) {
            cnt++;
            prev = a;
        }
    }
    cout << cnt << endl;
}