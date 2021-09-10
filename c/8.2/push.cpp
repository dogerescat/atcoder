#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> b;
    vector<int> c;
    for(int i = 0; i < n; i++) {
        if(n % 2 == 0) {
            if(i % 2 != 0) b.push_back(a[i]);
            else c.push_back(a[i]);
        } else {
            if(i % 2 == 0) b.push_back(a[i]);
            else c.push_back(a[i]);
        }
    }
    reverse(b.begin(), b.end());
    for(auto i : b) {
        cout << i << " ";
    }
    for(auto i : c) {
        cout << i << " ";
    }
    cout << endl;
}