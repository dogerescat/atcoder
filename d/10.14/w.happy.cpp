#include <bits/stdc++.h>
using namespace std;

void output(int n) {
    vector<int> a;
    int x = 0;
    while(n) {
        if(1 & n) a.push_back(x);
        x++;
        n >>= 1;
    }
    cout << a.size() << " ";
    for(auto i : a) {
        cout << i+1 << " ";
    }
    cout << endl;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    n = min(n, 8);
    vector<int> s(200);
    for(int i = 0; i < (1 << n); i++) {
        int x = 0; 
        for(int j = 0; j < n; j++) {
            if(i >> j & 1) x = (x + a[j]) % 200;
        }
        if(!s[x]) s[x] = i;
        else {
            cout << "Yes" << endl;
            output(i);
            output(s[x]);
            return 0;
        }
    }
    cout << "No" << endl;
}