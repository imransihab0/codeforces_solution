// https://codeforces.com/problemset/problem/1030/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n, t;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        if(t == 1){
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;
    
return 0;
}