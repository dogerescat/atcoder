#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<vector<int>> c(3, vector<int> (3));
   for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++) cin >> c[i][j];
   vector<vector<int>> a(3, vector<int> (2));
   for(int i = 0; i < 3; i++) { 
       for(int j = 0; j < 2; j++) {
           a[i][j] = c[i][j] - c[i][j+1];
       }
   }
   vector<vector<int>> b(3, vector<int>(2));
   for(int i = 0; i < 3; i++) {
       for(int j = 0; j < 2; j++) {
           b[i][j] = c[j][i] - c[j+1][i];
       }
   }
   for(int i = 0; i < 3; i++) {
       for(int j = 0; j < 2; j++) {
           cout << a[i][j] << ' ';
       }
       cout << endl;
   }
    for(int i = 0; i < 3; i++) {
       for(int j = 0; j < 2; j++) {
           cout << b[i][j] << ' ';
       }
       cout << endl;
   }
   for(int i = 1; i < 3; i++) {
       for(int j = 0; j < 2; j++) {
           if(a[i][j] != a[i-1][j]) {
               cout << "No" << endl;
               return 0;
           }
       }
   }
   
   for(int i = 1; i < 3; i++) {
       for(int j = 0; j < 2; j++) {
           if(b[i][j] != b[i-1][j]) {
               cout << "No" << endl;
               return 0;
           }
       }
   }
    cout << "Yes" << endl;
}