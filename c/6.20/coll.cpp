#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {
                if((y[i]-y[j])*(x[j]-x[k]) == (y[j]-y[k])*(x[i]-x[j])) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}