#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> H(n);
    for(int i = 0; i < n; i++) cin >> H[i];
    for(int i = 0; i < n-1; i++) {
       if(H[i] > H[i+1]+1) {
           cout << "No" << endl;
           return 0;
       } else if(H[i] == H[i+1] + 1) H[i+1]++;
    }
    cout << "Yes" << endl;
}