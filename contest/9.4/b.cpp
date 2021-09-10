#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s(4);
    for(int i = 0; i < 3; i++) {
        string a; cin >> a;
        if(a == "ABC") s[0]++;
        if(a == "ARC") s[1]++;
        if(a == "AGC") s[2]++;
        if(a == "AHC") s[3]++;
    }
    for(int i = 0; i < 4; i++) {
        if(!s[i]) {
            if(i == 0) cout << "ABC" << endl;
            else if(i == 1) cout << "ARC" << endl;
            else if(i == 2) cout << "AGC" << endl; 
            else if(i == 3) cout << "AHC" << endl;
            return 0;
        }
    }
}