#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> color(9);
    for(int i = 0; i < n; i++) {
        if(a[i] <= 399) color[0]++;
        else if(a[i] <= 799) color[1]++;
        else if(a[i] <= 1199) color[2]++;
        else if(a[i] <= 1599) color[3]++;
        else if(a[i] <= 1999) color[4]++;
        else if(a[i] <= 2399) color[5]++;
        else if(a[i] <= 2799) color[6]++;
        else if(a[i] <= 3199) color[7]++;
        else color[8]++;
    }
    int total = 0;
    for(int i = 0; i < 8; i++) {
        if(color[i]) total++;
    }
    int ans1 = total;
    if(!ans1) ans1 = 1;
    int ans2 = total + color[8];
    cout << ans1 << " " << ans2 << endl;
}