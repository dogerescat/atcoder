#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; cin >> x;

    for(int i = x; ; i++) {
        bool ok = false;
        for(int j = 2; j < sqrt(x); j++) {
            if(i % j == 0) ok = true;
        }
        if(!ok) {
            cout << i << endl;
            return 0;
        }
    }
}