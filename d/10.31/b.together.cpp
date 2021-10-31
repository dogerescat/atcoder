#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; 
    vector<int> A(100001);
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        
        A[a]++;
        if(a) A[a-1]++;
        A[a+1]++;
    }
    int ans = 0;
    for(int i = 0; i < 100001; i++) {
        ans = max(ans, A[i]);
    }
    cout << ans << endl;
}