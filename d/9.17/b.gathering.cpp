#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.size();
    vector<int> a(n, 1);
    for(int i = 0; i < n; i++) {
        if(s[i] == 'R' && s[i+1] == 'R') a[i+1] += a[i], a[i] = 0;
    }
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == 'L' && s[i-1] == 'L') a[i-1] += a[i], a[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == 'R' && s[i+1] == 'L') {
            int x = (a[i] + a[i+1]);
            if(x % 2 == 0) a[i] = x/2, a[i+1] = x/2;
            else {
                int y = x / 2;
                if(y % 2 != 0) swap(a[i], a[i+1]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

}