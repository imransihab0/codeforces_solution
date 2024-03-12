// https://codeforces.com/problemset/problem/344/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n, t = 1;
    cin >> n;

    string s, _s;
    cin >> s;

    for(int i=0; i<n-1; i++){
        cin >> _s;
        if(s != _s){
            t++;
        }
        s = _s;
    }

    cout << t << endl;
    
return 0;
}