#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; cin >> x; 
    int value = 0;
    for(int i = 0; ; i++) {
        value += i;
        if(value >= x) {
            cout << i << endl;
            return 0;
        }
    }
    // int left = 0, right = x;
    // while(right - left > 1) {
    //     int mid = (right + left) / 2;
    //     if(mid * (mid+1)/2 >= x) right = mid;
    //     else left = mid; 
    // }
    // cout << right << endl;
}