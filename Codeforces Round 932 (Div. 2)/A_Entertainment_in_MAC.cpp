// https://codeforces.com/contest/1935/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t;

    while(t--){
        
        int n;
        cin >> n;

        string s, _s;
        cin >> _s;
        s = _s;
        reverse(s.begin(), s.end());

        if(s < _s){
            cout << s+_s << endl;
        }else{
            cout << _s << endl;
        }

    }
    
return 0;
}
