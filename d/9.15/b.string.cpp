#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; int q; cin >> s >> q;
    int h = 0;
    string mae = "";
    string usiro = "";
    for(int i = 0; i < q; i++) {
        int t; cin >> t;
        if(t == 1) h++;
        else {
            int f; char c;
            cin >> f >> c;
            if(f == 1) {
                if(h % 2 == 0) mae = c + mae;
                else usiro = usiro + c;
            } else {
                if(h % 2 == 0) usiro = usiro + c;
                else mae = c + mae;
            }
        }
    }
    if(h % 2 != 0) {
        reverse(s.begin(), s.end());
        reverse(mae.begin(), mae.end());
        reverse(usiro.begin(), usiro.end());
        cout << usiro + s + mae << endl;
    } else cout << mae + s + usiro << endl;
}