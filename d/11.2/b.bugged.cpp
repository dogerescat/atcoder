#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> s;
    int total = 0;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        total += a;
        if(a % 10 != 0) s.push_back(a); 
    }
    sort(s.begin(), s.end());
    if(total % 10 != 0) {
        cout << total << endl;
        return 0;
    } 
    if(!s.size()) {
        cout << 0 << endl;
    } else {
        cout << total - s[0] << endl;
    }
}