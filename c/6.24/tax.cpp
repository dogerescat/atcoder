#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    for(int i = 1; i <= 1000; i++) {
        int x = i * 0.08;
        int y = i * 0.1;
        if(x == a && y == b) {
            cout << i << endl;
            return 0;
        } 
    }
    cout << -1 << endl;
}