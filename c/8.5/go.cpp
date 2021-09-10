#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; cin >> x;
    int value = 0; 
    for(int i = 0;; i++) {
        value += i;
        if(value >= x) {
            cout << i << endl;
            return 0;
        } 
    }
}