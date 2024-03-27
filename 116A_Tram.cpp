// https://codeforces.com/contest/116/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n, c = 0, MAX_CAPACITY = 0;
    cin >> n;

    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        c -= a;
        if(MAX_CAPACITY < c){
            MAX_CAPACITY = c;
        }
        c += b;
        if(MAX_CAPACITY < c){
            MAX_CAPACITY = c;
        }
    }

    cout << MAX_CAPACITY << endl;
    
return 0;
}