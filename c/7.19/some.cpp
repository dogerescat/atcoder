#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x(3);
    for(int i = 0; i < 3; i++) cin >> x[i];
    sort(x.begin(), x.end(), greater<int>());
    int a = (x[0] - x[1]) + (x[0] - x[2]);
    if(a % 2 == 0) cout << a / 2 << endl;
    else cout << ((a+2)/2) + 1 << endl;
}